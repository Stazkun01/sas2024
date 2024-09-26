#include<stdio.h>
int main(){
    int i , n , fact = 1;
    printf("saisissez votre nombre : ");
    scanf("%d" ,&n);
    for(i = 1 ;i <= n ;i++){
        fact *= i;
    }
    printf("le nombre est :%d" , fact);
    return 0;
}
