#include<stdio.h>
int main(){
 int i , s = 0 ,ne;
 printf("please enter the number of the elements : ");
 scanf("%d" , &ne);
 int array[ne];
 for(i=0;i<ne;i++){
 printf("please enter the elements : ");
 scanf("%d" , &array[i]);
 }
 for(i = 0 ;i <= ne ;i++){
 s += array[i];
 }
 printf("la somme des elements est  : %d " , s);
 return 0;
}
