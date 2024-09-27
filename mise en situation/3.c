#include<stdio.h>
int main (){
        int n;
            printf(" entrer un nombre entier :");
            scanf("%d" ,&n);
        int i;
    for (i =2 ;i< n-1;i++){
       if(n % i == 0){
        printf("ce n'est pas un nombre premier\n");
        break;}
    }
    if(i == n-1){
 printf("c'est un nombre premier\n");
 }

    return 0;
}
