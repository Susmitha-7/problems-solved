#include<stdio.h>
void dtob(int n){
    int binary[32];
    int i=0;
    if(n==0)
    {
        printf("0");
        return ;
    }
    while(n!=0)
    {
        binary[i]=n%2;
        n/=2;
        i++;
    }
    for(int k=i-1;k>=0;k--){
        printf("%d",binary[k]);
    }
    printf("\n");
}
int main(){
    int d;
    printf("Enter the decimal number:\n");
    scanf("%d",&d);
    printf("Binary equivalent is: %b\n",d);
    dtob(d);
    return 0;
}
    