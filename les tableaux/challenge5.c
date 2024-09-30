#include<stdio.h>
int main(){
 int i , min ,n;
 printf("please enter the number of the elements : ");
 scanf("%d" , &n);
 int array[n];
 for(i=0;i<n;i++){
 printf("please enter the numbers : ");
 scanf("%d" , &array[i]);
 }
 min = array[0];
 for (i = 0 ;i < n ;i++){
    if (min>array[i]){
        min = array[i];
    }
 }
printf("the minimum number is :  %d" , min);


 return 0;
 }