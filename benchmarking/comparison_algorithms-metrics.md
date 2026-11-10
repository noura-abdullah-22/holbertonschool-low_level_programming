# Run 1
```
Naive algorithm result: 625025000
Naive algorithm time: 1.030625 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000053 seconds
```

# Run 2
```
Naive algorithm result: 625025000
Naive algorithm time: 1.025883 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000054 seconds
```

# Run 3
```
Naive algorithm result: 625025000
Naive algorithm time: 1.023949 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000060 seconds
```

# Average execution time

- **Naive algorithm (A):** (1.030625 + 1.025883 + 1.023949) / 3 = **1.026819 seconds**
- **Single-pass algorithm (B):** (0.000053 + 0.000054 + 0.000060) / 3 = **0.000056 seconds**

# Relative difference

1.026819 / 0.0000557 ≈ 18,446

**The naive algorithm (A) is ~18,000 times slower than the single-pass algorithm (B).**

# Observations

- **Different results:** The naive algorithm returns 625025000, while the single-pass returns 25000. Only 25000 is correct; the naive version counts the same even numbers many times.
- **Complexity:** The naive algorithm is O(n²) (nested loops), while the single-pass is O(n) (one loop). This explains the huge time gap.
- **Energy:** Longer runtime means longer CPU activity, so the naive approach wastes far more energy.

