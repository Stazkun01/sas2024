#include<stdio.h>
int main(){
        int Revenu;
            printf("saisissez votre Revenu annuel");
            scanf("%f" , &Revenu);
        int Score;
            printf("saisissez votre Score de crédit");
            scanf("%f" , &Score);
        int Duree;
            printf("saisissez votre Durée du prêt");
            scanf("%f" , &Duree);
    if(Revenu >= 30000 && Score >= 700 &&  Duree <= 10){
        printf("vous etes elegible");
}
    else if(Revenu >= 30000 && Score >= 650 && Duree <= 15){
        printf("vous etes elegible avec condition");
}   
    else if(Revenu < 30000 || Score < 650 || Duree > 15){
        printf("vous n'etes pas elegible");
}
    return 0;
}