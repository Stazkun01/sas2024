#include<stdio.h>
int main(){
    int i , n , imp ;
    printf("saisissez votre nombre : ");
    scanf("%d" ,&n);
    for(i = 0 ;i <= n ;i++){
        i = i++;
        imp += i;
    }
    printf("le nombre est :%d" , imp);
    return 0;
}

