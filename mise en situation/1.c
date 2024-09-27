#include<stdio.h>
int main(){
    int base;
    printf("entrer la base du triangle : ");
    scanf("%d" , &base);
    int hauteur;
    printf("entrer la hauteur du triangle : ");
    scanf("%d" , &hauteur);
    int aire =( base * hauteur) / 2;
    printf("aire : %d \n" , aire);
    int perimetre = 3 * base;
    printf("perimetre : %d \n" , perimetre);
return 0;
}