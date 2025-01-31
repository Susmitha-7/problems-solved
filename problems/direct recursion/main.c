#include<stdio.h>
void direct(int n){
    if(n==0)
        return;
printf("%d ",n);
direct(n-1);
}
int main(){
    direct(6);
    return 0;
}