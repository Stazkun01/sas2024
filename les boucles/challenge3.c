#include<stdio.h>
int main(){
    int i , n , sum = 1;
    printf("saisissez votre nombre : ");
    scanf("%d" ,&n);
    for(i = 1 ;i <= n ;i++){
        sum += i;
    }
    printf("le nombre est :%d" , sum);
    return 0;
}

