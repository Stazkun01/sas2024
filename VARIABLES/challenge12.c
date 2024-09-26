#include <stdio.h>
    int main() {
        int a;
            printf("entrer le nombre :");
            scanf("%d",&a);
        int num1=a/1000;
        int num2 =a/100-num1*10;
        int num3= a/10-num1*100-num2*10;
        int num4=a/1-num1*1000-num2*100-num3*10;
            printf(" %d%d%d%d",num4,num3,num2,num1);

 return 0;
}