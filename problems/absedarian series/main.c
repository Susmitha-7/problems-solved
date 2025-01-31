//attaching the str2 with each and every index value of str1
//absedarian series
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    char s1[100],s2[100];
    char out[100];
    printf("Enter the first string:");
    scanf("%s",s1);
    printf("Enter the second string:");
    scanf("%s",s2);
    for(int i=0;i<strlen(s1);i++){
        snprintf(out,sizeof(out),"%c%s",s1[i],s2);
        printf("%s",out);
    }
    printf("\n");
    return 0;
}