/*print prime numbers in a given range
input: 2 ,15
output:2,3,5,7,11,13 */
#include<stdio.h>
    int prime(int num){
        if(num<=1){
        return 0;
        }
        int i=2;
        while(i*i<=num){
            if(num%i==0){
                return 0;
            }
            i++;
        }
        return 1;
    }
    int main(){
    int a,b;
    printf("Enter the values of a and b:");
    scanf("%d %d",&a,&b);
    printf("Prime numbers between %d and %d are:",a,b);
    for(int num=a;num<=b;num++){
        if(prime(num)){
            printf("%d ",num);
             }
    }
    return 0;
}