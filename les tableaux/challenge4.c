#include<stdio.h>
int main(){
 int i , max ,n;
 printf("please enter the number of the elements : ");
 scanf("%d" , &n);
 int array[n];
 for(i=0;i<n;i++){
 printf("please enter the numbers : ");
 scanf("%d" , &array[i]);
 }
 max = array[0];
 for (i = 0 ;i < n ;i++){
    if (max<array[i]){
        max = array[i];
    }
 }
printf("the maximum number is :  %d" , max);


 return 0;
 }