#include <stdio.h>
int main() {
    int pr;
    float yos;
    printf("Enter your performance rating:");
    scanf("%d", & pr);
    printf("Enter your years of service:");
    scanf("%f", &yos);
    if (pr>5) {
        printf("Invalid Input");
    }
    else if (pr==5 && yos>3) {
        printf("You earned an Excellent bonus!");
    }
    else if (pr==4 && yos>2) {
        printf("You earned a Good Bonus!");
    }
    else if (pr==3 && yos>1) {
        printf(" You earned a Basic Bonus!");
    }
    else {  printf("No Bonus");
    }
    return 0 ;
}