//Gray is an avid hiker
#include<stdio.h>
int valley(long int steps,char *path){
    long int level,i,vcount=0;
    for(i=0;i<steps;i++){
        if(path[i]=='U'){
            level++;
        }
        else if(path[i]=='D'){
            if(level==1){
                vcount++;
            }
            level--;
        }
        }
        return vcount;
         
}
int main(){
long int steps;
printf("Enter no of steps:");
scanf("%li",&steps);
char path[steps];
int i,result;
for(i=0;i<steps;i++){
    scanf("%c",&path[i]);
}
result=valley(steps,path);
printf("%d",result);
return 0;
}
//OUTPUT: enter no of steps : 8
//UDDDUDUU
//1