#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool isanagram(char s1[],char s2[]){
    int c[256]={0};
    int i;
    if(strlen(s1)!=strlen(s2)){
        return false;
    }
    for(i=0;s1[i] && s2[i];i++){
        c[(int)s1[i]]++;
         c[(int)s2[i]]--;
    }
    for(i=0;i<256;i++){
        if(c[i]!=0){
            return false;
        }
    }
    return true;
}
int main(){
    char s1[100],s2[100];
    printf("Enter the first string:");
    scanf("%s",s1);
    printf("Enter the second string:");
    scanf("%s",s2);
    if(isanagram(s1,s2)){
        printf("Both strings are anagram\n");
    }
    else{
        printf("Not anagram");
    }
    return 0;
}