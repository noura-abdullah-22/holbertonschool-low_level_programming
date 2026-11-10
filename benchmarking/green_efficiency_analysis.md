# Green Efficiency Analysis

## Measurement Methodology

I ran all three programs on my own laptop, inside WSL (Ubuntu), and compiled each one with `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-long-long`. I kept the same machine and flags for every run so the code was the only thing changing.

All timings come from `clock()` in `<time.h>`, which measures CPU time, converted to seconds using `CLOCKS_PER_SEC`. For the baseline loop and the algorithm comparison, I ran each program three times in a row, recorded the output exactly, and averaged the results.

For the instrumentation lab, I placed four `clock()` calls in `main`: one before `build_dataset()`, one after each phase, and one at the end. The end of one phase is the start of the next, so there are no gaps or overlaps. I kept `printf` and the time calculations outside the measured region, since printing is slow and would inflate the numbers.

## Observed Performance Differences

The baseline loop (100,000,000 iterations) took 0.128147, 0.126869 and 0.133415 seconds. Same code and same input, yet three different results, so one run is not enough to draw conclusions.

The algorithm comparison showed a much bigger gap. The naive version averaged 1.026819 seconds (1.030625, 1.025883, 1.023949), while the single-pass version averaged about 0.000056 seconds (0.000053, 0.000054, 0.000060). That makes the naive approach roughly 18,000 times slower. This matches the code: the naive version uses nested loops and does about 1.25 billion checks for 50,000 elements (O(n²)), while the single-pass version checks each element once (O(n)).

The two versions also returned different results: 625025000 for naive and 25000 for single-pass. Only 25000 is the real number of even values, because the naive version re-counts the same elements on every outer iteration. So it is not just slower, it is also wrong.

In the instrumentation lab, the total was 0.000322 seconds: BUILD_DATA 0.000149 s, PROCESS 0.000126 s and REDUCE 0.000047 s. The phases add up exactly to the total, which confirms the boundaries were placed correctly. All three phases are O(n), so the differences come from the work done per element. Building the data calls a function with a multiplication and a modulo per value, while reduce only multiplies and adds.

## Relation Between Runtime and Energy Consumption

This project did not measure power in watts, so runtime is used as a stand-in: the longer the CPU stays busy, the more energy it uses. Based on my averages, the naive algorithm kept the CPU working for about one second on a job the single-pass version finished in 0.000056 seconds. That is roughly 18,000 times more CPU activity for a result that was not even correct. At server scale, a choice like that becomes a real energy cost.

## Limitations of the Experiment

The main limitation is that CPU time is only a proxy for energy. Memory, disk and network use also consume power, and none of that was measured.

I also ran each program only three times, and the baseline numbers already varied by about 5%. The instrumentation timings were well under a millisecond, which makes them sensitive to system noise. Running inside WSL and having background apps open could also have affected the results, and everything was tested on a single machine.

## Practical Engineering Takeaway

The biggest lesson for me is that the algorithm matters far more than small tweaks. Going from O(n²) to O(n) made the code about 18,000 times faster on my machine. I also learned not to trust a single measurement: run it several times, keep the conditions the same, and make sure both versions give the same answer before comparing speed. A fast program that gives the wrong result is not an improvement.
