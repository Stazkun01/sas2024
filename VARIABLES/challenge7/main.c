#include <stdio.h>
int main()
{ 
    float a , done;
        printf("type the first number : \n");
        scanf("%f",&a);
    float b;
        printf("type the second number : \n");
        scanf("%f",&b);
    float c;
        printf("type the third number : \n");
        scanf("%f" ,&c);
        float ap = a*2;
        float bp = a*3;
        float cp = a*5;
        done = (ap +bp +cp) /10;
        printf("la ponderation des nombres suivant est : %f" , done);
    return 0;
}