
#include<stdio.h>

int main(void){
    int nos;
    int price;
    int tp;
    
  
    
    printf("How many scoops? ");
    scanf("%d", &nos);
    
    printf("How many dollars does each scoop cost? ");
    scanf("%d", &price);
    
    tp = nos * price;
     
    if (tp <= 10) {
        printf("You have enough money!\n");
    } else{
        printf("Oh no, you don't have enough money :(\n");
    }
    return 0;
}
