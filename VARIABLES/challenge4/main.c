#include <stdio.h>
int main() {
    float kmh;
        printf("type your distance in km/h: \n");
        scanf("%f", &kmh);
    float km = kmh ;
    float ms = km * 0.27778;
        printf("your distance is :%f" , ms);
        return 0;
 }
