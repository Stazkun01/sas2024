#include<stdio.h>
int main (){
        int n;
            printf(" entrer un nombre entier :");
            scanf("%d" ,&n);
        int i;
    for (i =2 ; n % i == 0;){
        printf("ce n'est pas un nombre premier\n");
        break;
    }
    for (i =2 ; n % i != 0;){
        printf("c'est un nombre premier\n");
        break;
    } 
    
    return 0;
}