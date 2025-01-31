#include<stdio.h>
int main(){
    int n,term;
    printf("Enter the value of n");
    scanf("%d",&n);
   if(n%2==1){
      term=7*(n/2);
   }
   else{
       term=6*(n/2-1);
   }
   printf("The %dth term is:%d\n",n,term);
    return 0;
}