/* Write a Program that, given an array A[] of n numbers and another number x, determines whether or not there exist two elements in A[]
whose sum is exactly x */

#include<stdio.h>
int FindTheSum(int arr[],int size, int x){
  for(int i=1;i<=size;i++){
    for(int j=1;j<=size;j++){
      if(arr[i]+arr[j]==x){
        return 1;
  }
    }
  }
  return 0;
}
int main(){
  int arr[]={1,2,3,4,5};
  int size = sizeof(arr)/sizeof(arr[0]);
  int x = 6;

  if(FindTheSum(arr,size,x)){
    printf("Yes, there are two elements whose sum is %d\n", x);
} else{
printf("No, there are two elements whose sum is not equal to %d\n", x);
}
return 0;
}
