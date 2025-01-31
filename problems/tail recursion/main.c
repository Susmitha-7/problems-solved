#include<stdio.h>
void tail(int n){
    if(n==0)
        return;
printf("%d ",n);
tail(n-1);
}
int main(){
    tail(6);
    return 0;
}