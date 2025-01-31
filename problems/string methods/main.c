//copy of strings
#include<string.h>
#include<stdio.h>
int main(){
    char one[20]="abcdefghijkl";
    char two[20];
    strcpy(two,one);
    printf("%s",two);
    return 0;
}


//concatenation of strings
#include<string.h>
#include<stdio.h>
int main(){
    char one[20]="abcdefghijkl";
    char two[20]="mnopqrstu";
    strcat(two,one);
    printf("%s",one);
    return 0;
}


//string compare
#include<string.h>
#include<stdio.h>
int main(){
    char one[20]="abcdefghijkl";
    char two[20]="abcdefghijkl";
    printf("%d\n",strcmp(one,two));
    return 0;
}
