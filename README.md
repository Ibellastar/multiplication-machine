# Class Assignment: Multiplication Machine
## Introduction

In this exercise you will create a function called **int multiply(int a, int b)** that takes in two integers and multiplies them together.

### Starter Files

The starter files for this exercise are located in the `src` directory. Implement the **int multiply(int a, int b)** function in ths following files:

1. `multiplier.c`
2. `main.c`

In the **main.c** file you are to assign values to the two variables, call the **int multiply()** funcion, and return a printed statement.

### Run Checks

To check your work, run the following command:

```bash
$ make checker
```

This will run the tests and output the results.

### Output

If all checks pass, you will see the following output:

```bash
✅ Test 1 - Positive Num * Positive Num
../.github/checker/test/test_1.c:12:test_1:PASS

✅ Test 2 - Positive Num * Negative Num
../.github/checker/test/test_2.c:12:test_2:PASS

✅ Test 3 - Num * 0
../.github/checker/test/test_3.c:12:test_3:PASS

✅ Test 4 - Negative Num * Negative Num
../.github/checker/test/test_4.c:12:test_4:PASS

Ok:                 4
Expected Fail:      0
Fail:               0
Unexpected Pass:    0
Skipped:            0
Timeout:            0
```

If there are failing checks you will see summary of the failing tests:

```
Summary of Failures:

1/4 Prints numbers          FAIL            0.14s   exit status 2
2/4 Prints Fizz             FAIL            0.25s   exit status 2
3/4 Prints Buzz             FAIL            0.35s   exit status 2
4/4 Prints FizzBuzz         FAIL            0.46s   exit status 2

Ok:                 0
Expected Fail:      0
Fail:               4
Unexpected Pass:    0
Skipped:            0
Timeout:            0
```

In order to complete the exercise all tests must pass.
