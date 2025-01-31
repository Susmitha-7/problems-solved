#include<stdio.h>
#include<math.h>
int main(){
    int num,one,last,digit,swapped;
    printf("Enter the value of n:");
    scanf("%d",&num);
    digit=(int)log10(num);
    one=num/pow(10,digit);
    last=num%10;
    swapped=last*pow(10,digit)+(num%(int)pow(10,digit)-last+one);
    printf("Swapped number is:%d\n",swapped);
    return 0;
}