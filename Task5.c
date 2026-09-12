#include <stdio.h>
int main(){
    int choice;
    printf("Menu:");
    printf("\n1.Burger\n2. Pizza\n3. Biryani\n4. Sandwich");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("You have selected Burger.");
                break;
            case 2:
                printf("You have selected Pizza. ");
                break;
            case 3:
                printf("You have selected Biryani. ");
                break;
            case 4:
                printf("You have selected Sandwich. ");
                break;
            default:
            printf("Invalid choice.");
            }
return 0;
}