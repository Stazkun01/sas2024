#include<stdio.h>
int main (){
        int n;
            printf(" entrer un nombre entier :");
            scanf("%d" ,&n);
        int i;
         if(n==1)
        printf("c'est un nombre premier");
    for (i =2 ;i< n;i++){
       if(n % i == 0){
        printf("ce n'est pas un nombre premier\n");
        break;}
    }
 
    return 0;
}
