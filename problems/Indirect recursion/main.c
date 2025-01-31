#include<stdio.h>
void fun1(int n);
void fun2(int n);
void fun1(int n)
{
    if(n<=0)
    return;
    printf("%d",n);
    fun2(n-1);
}
void fun2(int n){
    if(n<=0)
    return;
    printf("%d",n);
    fun1(n-1);
}
int main(){
  fun1(6);
  return 0;
}


