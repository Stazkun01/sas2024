#include <stdio.h>
int main(){
    float Cls;
        printf("saisissez votre temperature C :\n");
        scanf("%f", &Cls);
     float C = Cls;
    if ( C >= 100){
        printf("l'etat de leau est gaz");
        }
    else if (0 <= C < 100){
        printf("l'etat de l'eau est liquid");
      }
    else {
        printf("l'etat de l'eau est solid");
    }
    return 0;
    }
