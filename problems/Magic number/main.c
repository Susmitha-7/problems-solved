#include<stdio.h>
#include<math.h>
int main(){
    int num,sum,digit,Onum;
    printf("Enter the value of n:");
    scanf("%d",&num);
    Onum=num;
    while(num>=10){
        sum=0;
        while(num>0){
            digit=num%10;
            sum+=digit;
            num /=10;
        }
        num=sum;
    }
    if(num==1){
        printf("%d is a magic number\n",Onum);
    }
    else{
        printf("%d is not a magic number\n",Onum);
    }
    return 0;
}