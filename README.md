# problems-solved
**1.Geometric Series**

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



**2.Geometric Series-2** 

**Problem Statement**: Write a C program that calculates the value of the nth term in a sequence based on the following conditions:

 If the value of n is odd, the nth term is calculated as 7 * (n / 2).
 
 If the value of n is even, the nth term is calculated as 6 * (n / 2 - 1).
 
 You need to prompt the user to input an integer n and then print the corresponding nth term of the sequence.

**Algorithm**:
1. Start the program and take an integer input n from the user.
2. Check if n is odd or even:
3. If n is odd (n % 2 == 1), calculate the nth term as 7 * (n / 2).
4. If n is even (n % 2 == 0), calculate the nth term as 6 * (n / 2 - 1).
5. Display the nth term calculated.
6. End the program.

**C Program**:
```c
#include<stdio.h>
int main(){
    int n, term;
    printf("Enter the value of n: ");
    scanf("%d", &n);
   
    if(n % 2 == 1){
        term = 7 * (n / 2);
    }
    else{
        term = 6 * (n / 2 - 1);
    }
   
    printf("The %dth term is: %d\n", n, term);
    return 0;
}
```
**Sample Input and Output**:
```
Input 1:
Enter the value of n: 5

Output 1:
The 5th term is: 14
```
Explanation 1:
Since n = 5 is odd, the nth term is calculated as 7 * (5 / 2) = 7 * 2 = 14.
```
Input 2:
Enter the value of n: 6

Output 2:
The 6th term is: 12
```
**Explanation 2**:
Since n = 6 is even, the nth term is calculated as 6 * (6 / 2 - 1) = 6 * (3 - 1) = 6 * 2 = 12.


