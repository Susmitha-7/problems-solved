# problems-solved
**Geometric Series**

**Problem Statement**:
Given an integer n, find and print the n-th term of a geometric series. The series has a specific pattern:

 If the index n is odd, the formula to calculate the n-th term is 3^(n/2 - 1).
 
 If the index n is even, the formula to calculate the n-th term is 2^(n/2).
 
Your task is to write a program that computes the n-th term based on the above patterns and prints the result.

**Input**:
A single integer n, where n is the position in the geometric series.

**Output**:
The n-th term in the series.

**Algorithm**:
1. Read the integer n from the user.
2. Check if n is odd or even:
      If n is odd, compute the n-th term using the formula 3^(n/2 - 1).
      If n is even, compute the n-th term using the formula 2^(n/2).
3. Print the n-th term.

**Code**:
```c
#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    if(n % 2 == 1) // for odd index
    {
        int term = pow(3, (n / 2) - 1); // nth term for odd index
        printf("The %dth term is: %d\n", n, term);
    }
    else // for even index
    {
        int term = pow(2, n / 2); // nth term for even index
        printf("The %dth term is: %d\n", n, term);
    }
    return 0;
}
```

**Sample Input and Output**:

**Sample 1**:
```

Input:
Enter the value of n: 16

Output:
The 16th term is: 256
```

**Sample 2**:
```

Input:
Enter the value of n: 15

Output:
The 15th term is: 81
```

**Explanation**:

For n = 16, since 16 is even, the term is calculated as 2^(16/2) = 2^8 = 256.

For n = 15, since 15 is odd, the term is calculated as 3^((15/2) - 1) = 3^(7) = 81.


