#include <stdio.h>
int main() {
    int units=650;
    if (units<0){
        printf("Invalid Input");
    }
    else if (units >500) {
        printf("High usage");}
    else { 
        printf("Normal usage");
    }
    return 0;
}