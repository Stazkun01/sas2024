#include <stdio.h>

int main() {
 int age;
    printf("saisissez l'age :\n");
    scanf("%d",&age);
 
 int type;
    printf("saisissez le type de voiture (1 pour sportive, 2 pour utilitaire, 3 pour familiale) :\n");
    scanf("%d",&type);
    
 int nombre;
    printf("saisissez le nombre :\n");
    scanf("%d",&nombre);
 int prime;
    printf("saisissez votre prime :\n");
    scanf("%d",&prime);
    
if (age < 25){
    
     prime = prime*1.5;
}
else if (25 < age < 65){
     prime = prime;
}
else {
    
     prime = prime*1.2;
}
switch(type){
    case 1 :
         prime = prime*2;
        break;
    case 2 :
         prime = prime*1.2;
        break;
    case 3 :
         prime = prime*1.1;
        break;
}
if (nombre > 1){
    printf("votre prime est %d " , prime +(prime * 30/100));
}
else{
    printf("votre prime est %d " , prime) ;
}
    return 0;
}