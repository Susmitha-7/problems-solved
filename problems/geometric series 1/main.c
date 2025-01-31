//print the 16th term(geometric series)
#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    if(n%2==1)//for even index there will be a odd term and vice versa
    {
        int term=pow(2,n/2);//nth term for even
        printf("The %dth term is:%d\n",n,term);
    }
    else{
        int term=pow(3,(n/2)-1);//nth term for odd
        printf("The %dth term is:%d\n",n,term);
    }
    return 0;
    
}