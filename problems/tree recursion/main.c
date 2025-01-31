#include<stdio.h>
void tr(int n){
    if(n==0)
    return;
    printf("%d ",n);
    tr(n-1);
    tr(n-1);
}
int main(){
    tr(3);
    return 0;
}