#include<stdio.h>
int main(){
  float temp[5];
  int i ;
  for(i=0;i<5;i++){
    printf("donnez l'element %d du tableau \n" , i+1);
    scanf("%f" ,&temp[i]);
  }
  float min = temp[0];
  float max = temp[0];
  for(i = 0 ; i < 5 ; i++){
    if (max < temp[i]){
      max = temp[i];
    }
  }
  for(i = 0 ; i < 5 ; i++){
    if (min > temp[i]){
      min = temp[i];
    }
  }
  printf("biggest value is : %f \n" , max);
  printf("smallest value is : %f \n" , min);
  return 0;
}