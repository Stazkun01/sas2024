#include <stdio.h>
int main() {
     float cls;
        printf("type your temperature in C°: \n");
        scanf("%.2f", &cls);
    float C = cls ;
    float K = C + 273.15 ;
        printf("your temperature is :%.2f" , K);
        return 0;
 }
