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

**3.Nested loop**

**Problem Statement**: Write a program that prints the word "Sruthi" in a square grid pattern. The size of the grid is determined by an integer n, which is provided by the user. The grid will have n rows and n columns, and each cell will contain the word "Sruthi".

**Algorithm**:

1. Read the integer value n from the user.
2. Use two nested for loops to print the word "Sruthi":
3. The outer loop runs n times (for rows).
4. The inner loop runs n times (for columns in each row).
5. In each iteration of the inner loop, print the word "Sruthi".
6. After each row (after the inner loop finishes), print a newline character \n to move to the next row.
7. End the program.

**C Program**:
```c
#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("Sruthi");
        }
        printf("\n");
    }
    return 0;
}
```

**Sample Input and Output**:
```
Sample Input 1:
Enter the value of n: 3

Sample Output 1:
SruthiSruthiSruthi
SruthiSruthiSruthi
SruthiSruthiSruthi
```
```
Sample Input 2:
Enter the value of n: 5

Sample Output 2:
SruthiSruthiSruthiSruthiSruthi
SruthiSruthiSruthiSruthiSruthi
SruthiSruthiSruthiSruthiSruthi
SruthiSruthiSruthiSruthiSruthi
SruthiSruthiSruthiSruthiSruthi
```
**Explanation**:

For n = 3, the program prints "Sruthi" 3 times per row and does this for 3 rows.

For n = 5, the program prints "Sruthi" 5 times per row and does this for 5 rows.

**4.Hollow Square**

**Problem Statement**:

Write a program that prints a square pattern of the letter "s" in a border shape. The size of the square grid is determined by an integer n, which is provided by the user. The border of the square will be filled with the letter "s", while the inside of the square will be filled with spaces. The program will print a hollow square pattern with a border made of "s".

**Algorithm**:

1. Read the integer value n from the user.
2. Use two nested for loops to print the pattern:
3. The outer loop runs n times (for rows).
4. The inner loop runs n times (for columns in each row).
5. For each position (i, j) in the grid:
6. Print "s" if i == 1 (top row), i == n (bottom row), j == 1 (left column), or j == n (right column).
7. Otherwise, print a space.
8. After each row (after the inner loop finishes), print a newline character \n to move to the next row.
9. End the program.

 **C Program**
   ```c
   
   #include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || i==n||j==1||j==n){
                printf("s");
            }
            else{
                printf(" ");
            }
 }
 printf("\n");
    }
    return 0;
}
```

**Sample Input and Output**:
```
Sample Input 1:
Enter the value of n: 5

Sample Output 1:
sssss
s   s
s   s
s   s
sssss
```
```
Sample Input 2:
Enter the value of n: 7

Sample Output 2:
sssssss
s     s
s     s
s     s
s     s
s     s
sssssss
```
**Explanation**:

For n = 5, the program prints a 5x5 square, with "s" along the edges and spaces in the center.

For n = 7, the program prints a 7x7 square, with "s" along the edges and spaces inside.

In all cases, the program prints a hollow square pattern with "s" on the border.


**5.Hollow Triangle**

**Problem Statement**:

Write a program that prints a pattern of numbers in the shape of a right-angle triangle inside a square grid. The size of the grid is determined by an integer n, which is provided by the user. The program prints the numbers along the diagonal, along the bottom row, and along the leftmost column. All other positions inside the grid will be filled with spaces.

**Algorithm**:

1. Read the integer value n from the user.
2. Use two nested for loops to print the pattern:
3. The outer loop runs n times (for rows).
4. The inner loop runs n times (for columns in each row).
5. For each position (i, j) in the grid:
6. Print the number j if:
   i == n (bottom row),
   j == 1 (leftmost column),
   i == j (diagonal).
7. Otherwise, print a space.
8. After each row (after the inner loop finishes), print a newline character \n to move to the next row.
9. End the program.
    
  **C Program**
  ```c
  #include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==n||j==1||i==j){
                printf("%d",j);
            }
            else{
                printf(" ");
            }
 }
 printf("\n");
    }
    return 0;
}
```
**Sample Input and Output**:
```
Sample Input 1:
Enter the value of n: 5

Sample Output 1:
1    
1 2  
1   3
1     4
1 2 3 4 5
```
```
Sample Input 2:
Enter the value of n: 4

Sample Output 2:
1   
1 2 
1   3
1 2 3 4
```
```
Sample Input 3:
Enter the value of n: 6

Sample Output 3:
1     
1 2   
1   3 
1     4
1       5
1 2 3 4 5 6
```
**Explanation**:

For n = 5, the program prints a 5x5 grid where:

The numbers along the diagonal (i == j).

The numbers in the last row (i == n).

The numbers in the first column (j == 1).

For n = 4, it prints a 4x4 grid with similar logic.

For n = 6, it prints a 6x6 grid, showing the numbers at the diagonal, last row, and first column.

The key pattern is that the numbers along the bottom row, leftmost column, and diagonal of the grid are printed, while all other positions are filled with spaces.

