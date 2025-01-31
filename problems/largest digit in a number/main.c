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