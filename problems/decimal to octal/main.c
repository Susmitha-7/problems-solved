//decimal to octal
#include<stdio.h>
void dtoO(int n){
    int oct[32];
    int i=0;
    if(n==0)
    {
        printf("0");
        return ;
    }
    while(n!=0)
    {
        oct[i]=n%8;
        n/=8;
        i++;
    }
    for(int k=i-1;k>0;k--){
        printf("%c",oct[k]);
    }
    printf("\n");
}
int main(){
    int d;
    printf("Enter the decimal number:\n");
    scanf("%d",&d);
    printf("octal equivalent is: %o\n",d);
    dtoO(d);
    return 0;
}