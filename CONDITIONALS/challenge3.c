#include<stdio.h>
int main(){
    int fnum;
        printf("saisissez le premier nombre :\n");
        scanf("%d" , &fnum);
    int snum;
        printf("saisissez le deuxieme nombre :\n");
        scanf("%d" , &snum);
    if (fnum == snum){
        printf("%d\n", fnum*3);
        }
    else if (fnum != snum){
        printf("%d\n", snum + fnum);
    return 0;
}
}