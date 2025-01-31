#include<stdio.h>
int nest(int n){
    if(n>100)
    return n-10;
    return nest(nest(n+11));
}
int main(){
    printf("Result: %d\n",nest(95));
    return 0;
}


/*First Call: nest(95)

Since 95 is less than 100, it does not return immediately. Instead, it calls nest(nest(95 + 11)), 
which is nest(nest(106)).
Second Call: nest(106)

106 is greater than 100, so the function returns 106 - 10 = 96.
Third Call: Now we have nest(96), because the second call returned 96.

Since 96 is still less than 100, it calls nest(nest(96 + 11)), which is nest(nest(107)).
Fourth Call: nest(107)

107 is greater than 100, so it returns 107 - 10 = 97.
Fifth Call: Now we have nest(97).

97 is less than 100, so it calls nest(nest(97 + 11)), which is nest(nest(108)).
Sixth Call: nest(108)

108 is greater than 100, so it returns 108 - 10 = 98.
Seventh Call: Now we have nest(98).

98 is still less than 100, so it calls nest(nest(98 + 11)), which is nest(nest(109)).
This process continues, and you'll notice that the value of n keeps increasing with each recursive 
call until n finally exceeds 100.*/