//pgm to print ASCII values when range is given
#include<stdio.h>
int main(){
    for(int i=0;i<=127;i++){
        printf("%c\t\t%d\n",i,i);
    }
    return 0;
}