//program to print the second largest element in a givrn array by taking random inputs
#include <stdio.h>
int main()
{
   int n;
   printf("Enter number of elements in an array:");
   scanf("%d",&n);
 if(n<2){
   printf("Array must contain atleast 2 elements\n");
   return 0;
 }
 int arr[n];
 printf("enter %d elements:\n",n);
   for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int big=arr[0],big2=-1;
    for(int i=1;i<n;i++){
       if(arr[i]>big){
           big2=big;
           big=arr[i];
           }
           else if(arr[i]>big2 && arr[i]!=big){
               big2=arr[i];
           }
    }
      if(big2==-1){
               printf("No second largest element found,all are equal\n");
           }
           else{
           }
           printf("The second largest element is %d\n",big2);
    return 0;
}