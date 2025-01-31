//factorial of n using  function by recursion
#include<stdio.h>
int fact(int n)
{
if(n==0){
    return 1;
}
return n*fact(n-1);
}
int main(){
 int num =5;
 printf("Result %d\n",fact(num));
 return 0;
}
