#include<stdio.h>
int main(){
    int years;
        printf("saisissez l'anne :\n");
        scanf("%d" ,&years);
    int mois = years * 12;
    int day = mois * 30;
    int hours = day *24;
    int minutes = hours * 60;
    int second = minutes * 60;
    printf("l'anne est egale à %d mois\n" , mois);
    printf("l'anne est egale à %d jours\n" , day);
    printf("l'anne est egale à %d heures\n" , hours);
    printf("l'anne est egale à %d minutes\n" , minutes);
    printf("l'anne est egale à %d second\n" , second);
return 0;
}
