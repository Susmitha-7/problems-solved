//program to print the largest element in a givrn array by taking random inputs
#include <stdio.h>
int main()
{
   int n;
   printf("Enter number of elements in an array:");
   scanf("%d",&n);
   int arr[n];
   printf("Enter %d elements:\n",n);
   
    for(int i=1;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int big=arr[0];
    for(int i=1;i<n;i++){
       if(arr[i]>big){
           big=arr[i];
           
       }
   }
   printf("The largest element in the array is:%d\n",big);

    return 0;
}