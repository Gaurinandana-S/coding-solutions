# Diagonal Difference

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a square matrix, calculate the absolute difference between the sums of its diagonals.  
  
For example, the square matrix $arr$ is shown below:  

	1 2 3
    4 5 6
    9 8 9  
    
- The left-to-right diagonal = $1 + 5 + 9 = 15$.    
- The right-to-left diagonal = $3 + 5 + 9 = 17$.    

Their absolute difference is $|15 - 17| = 2$.  

**Function description**

Complete the $\textit{diagonalDifference}$ function with the following parameter:  
  
-	$int\ arr[n][m]$: a 2-D array of integers 
    
**Return**  

-	$int$: the absolute difference in sums along the diagonals	

**Input Format**

The first line contains a single integer, $n$,  the number of rows and columns in the square matrix $arr$.  
Each of the next $n$ lines describes a row, $arr[i]$, and consists of $n$ space-separated integers $arr[i][j]$.

**Constraints**

+ $-100 \le arr[i][j] \le 100$

**Output Format**

## Solution

**Language:** Python  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-29T03:38:35.156Z  

```py
#!/bin/python3

import math
import os
import random
import re
import sys
#
# Complete the 'diagonalDifference' function below.
#
# The function is expected to return an INTEGER.
# The function accepts 2D_INTEGER_ARRAY arr as parameter.
#

def diagonalDifference(arr):
    n=len(arr)
    diag1,diag2=0,0
    for i in range (0,n):
        diag1+=arr[i][i]
        diag2+=arr[i][n-i-1]
    return (abs(diag1-diag2))
    
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    arr = []

    for _ in range(n):
        arr.append(list(map(int, input().rstrip().split())))

    result = diagonalDifference(arr)

    fptr.write(str(result) + '\n')

    fptr.close()

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/diagonal-difference/problem)