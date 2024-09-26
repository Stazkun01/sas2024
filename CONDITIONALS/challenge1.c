#include <stdio.h>
int main(){
    int num;
        printf("saisissez votre nombre :\n");
        scanf("%d" ,&num);
    if (num %2 == 0){
        printf("le nombre %d est paire :" , num);
    }
    else {
        printf("le nombre %d n'est pas pair :" , num);
        
}
return 0;
}