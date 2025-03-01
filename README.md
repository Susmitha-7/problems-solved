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


**6.Equilateral Triangle**

**Problem Statement**:

Write a program that prints a pyramid pattern of dollar signs ($). The height of the pyramid is determined by an integer n, which is provided by the user. The program should print a pyramid where the first row contains one dollar sign, the second row contains three dollar signs, the third row contains five dollar signs, and so on, with the number of dollar signs increasing by two for each subsequent row.

**Algorithm**:

1. Read the integer value n from the user, which specifies the height of the pyramid.
2. Use a loop to print each row of the pyramid:
3. The outer loop runs n times, one for each row.
4. In each row:
   Print spaces to align the dollar signs in the center. The number of spaces in the i-th row is (n - i).
   Print dollar signs ($). The number of dollar signs in the i-th row is (2 * i - 1).
5. After printing the dollar signs for each row, print a newline character \n to move to the next row.
6. End the program.

 **C Program**
```c
#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int j=1;j<=(2*i-1);j++){
            printf("$");
        }
        printf("\n");
    }
    return 0;
    
}
```
**Sample Input and Output**:
```
Sample Input:
Enter the value of n: 5

Sample Output:
    $
   $$$
  $$$$$
 $$$$$$$
$$$$$$$$$
```
**Explanation**: 

For n = 5, the pyramid has 5 rows, with each row having:

1 dollar sign in the first row, 3 in the second, 5 in the third, 7 in the fourth, and 9 in the fifth.

The number of spaces decreases as we move down the rows.



**7.Hollow Square with diagnol and anti-diagonal**

**Problem Statement**:

Write a program to print a pattern of a hollow square, with diagonal crosses formed by *. The size of the square is determined by an integer n, provided by the user. The square should have a border of *, along with the diagonals (top-left to bottom-right and top-right to bottom-left) also filled with *. All other positions inside the square should be filled with spaces.

**Algorithm**:

1. Read the integer value n from the user, which specifies the size of the square grid.
2. Use two nested for loops to print the pattern:
3. The outer loop runs n times, representing the rows.
4. The inner loop runs n times, representing the columns in each row.
5. For each position (i, j) in the grid:
       Print * if:
       i == 1 (first row),
       i == n (last row),
       j == 1 (first column),
       j == n (last column),
       i == j (main diagonal),
       i + j == n + 1 (anti-diagonal).
6. Otherwise, print a space.
7. After each row, print a newline character \n to move to the next row.
8. End the program.
   
 **C Program**
 ```c
 #include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1||i==n||j==1||j==n||i==j||i+j==n+1)
            {
                printf(" * ");
            }
            else{
                printf("   ");
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
* * * * *
* *   * *
*   *   *
* *   * *
* * * * *
```
**Explanation**:

For n = 6, the program prints a 6*6 grid. The pattern consists of:

* on the borders (first and last rows, first and last columns),
* along the main diagonal (i == j),
* along the anti-diagonal (i + j == n + 1).

**8.Pascal's Triangle**

 **Problem Statement**:
 
 Write a C program that takes an integer n as input and prints Pascal's Triangle of n rows. Pascal's Triangle is a triangular array of binomial coefficients, where:
 The first and last value in each row is always 1.
 
 Each intermediate value in a row is the sum of the two values directly above it in the previous row.
 
 The formula to compute an element at row i and column j is:
 
 C(i,j)=C(i−1,j−1)× j(i−j+1)
​

 **Algorithm**:
1. Accept an integer n from the user, which represents the number of rows in Pascal's Triangle.
2. Loop through each row i from 0 to n-1.
3. Print leading spaces to align the triangle properly.
4. Loop through each column j from 0 to i:
5. If j == 0 or i == 0, set c = 1 (since the first element of each row is always 1).
6. Otherwise, compute the binomial coefficient using the formula:
    C(i,j)=C(i−1,j−1)× j(i−j+1)
​
   
 **C Program**
 ```c
#include<stdio.h>
int main()
{
    int row,s,i,c,j;
    printf("Enter the value of n:");
    scanf("%d",&row);
    for(i=0;i<row;i++){
        for(s=1;s<=row-i;s++){
            printf("  ");
        }
        for(j=0;j<=i;j++){
            if(j==0 || i==0){
                c=1;
            }
            else{
                c=c*(i-j+1 ) / j;
            }
            printf("%4d",c);
        }
        printf("\n");
    }
    return 0;
    }
```
**Sample Input and Output**:
```
Sample Input:
Enter the value of n: 5

Sample Output:
        1
      1   1
    1   2   1
  1   3   3   1
1   4   6   4   1
```
**Explanation**:

The first row contains only 1.

The second row contains 1 1.

The third row follows Pascal's Triangle rule: 1 (1+1) 1 → 1 2 1.

The fourth row: 1 (1+2) (2+1) 1 → 1 3 3 1.

The fifth row: 1 (1+3) (3+3) (3+1) 1 → 1 4 6 4 1.

This pattern continues as n increases.


**9.Largest Digit**

**Problem Statement**:

Write a C program to find the largest digit in a given positive integer.

The program should take an integer input from the user, extract each digit, and determine the maximum digit present in the number.

**Algorithm**:

1. Start the program.
2. Declare integer variables n (input number), d (to store individual digits), and large (to store the largest digit, initialized to 0).
3. Prompt the user to enter a positive integer n.
4. Read the input value using scanf().
5. Use a while loop to extract each digit of n:
   Compute d = n % 10 to get the last digit.
6. If d is greater than large, update large = d.
7. Remove the last digit by performing n = n / 10.
8. Once all digits are processed, print the largest digit.
9. End the program.

**C Program**:
```c
#include<stdio.h>
#include<math.h>
int main(){
    int n,d,large=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    while(n!=0){
        int d=n%10;
        if(d>large){
            large=d;
        }
        n /=10;
    }
    printf("Largest digit is :%d\n",large);
    return 0;
}
```
**Sample Input and Output**:

```
Input:
Enter the value of n: 2749

Output:
Largest digit is : 9
```
**Processing**:

Extracted digits: 9, 4, 7, 2

Largest digit: 9
