#include <stdio.h>
#include <stdlib.h>

int main()
{
    float FirstNum;
        printf("type the first number : \n");
        scanf("%f",&FirstNum);
        float a = FirstNum;
    float SecondNum;
        printf("type the sexond number : \n");
        scanf("%f" , &SecondNum);
        float b = SecondNum ;
        printf("%f\n" , a+b);
        printf("%f\n" , a-b);;
        printf("%f\n" , a*b);
        printf("%f\n" , a/b);

    return 0;
}
