//assigning a pointer to a variable
#include<stdio.h>
int main(){
    int num=100;
    int *ptr=&num;
    printf("%d\n",num);
    printf("%p\n",&num);
    printf("%p\n",ptr);
    return 0;
}
