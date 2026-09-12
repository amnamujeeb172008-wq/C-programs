#include <stdio.h>
int main() {
    int acc;
    int wd;
    printf("Enter your account balance");
    scanf("%d", &acc);
    printf("Enter the amount you want to withdraw");
    scanf("%d", &wd);
    if (wd>0 && wd<=acc) {
        printf("Withdrawal Approved");}
    else {
        printf("Withdrawal Denied"); }
return 0;
}