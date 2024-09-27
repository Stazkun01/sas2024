#include<stdio.h>
int main (){
        float temp;
            printf(" entrer ta temperature :");
            scanf("%f" ,&temp);
    if (temp >= 38) {
        printf("vous avez de la fievre");
    }
    else {
        printf("votre temperature est normale");
    }
    return 0;
}