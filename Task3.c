#include <stdio.h>
int main() {
    int marks=75;
    if (marks >=80) {
        printf(" Your grade  is A");
    }
    else if (marks >=70 && marks<80) {
        printf(" Your grade is B");
    }
    else if (marks >=60 && marks<70) {
        printf(" Your Grade is C");
    }
    else if (marks>=50 && marks<60) {
        printf("Your grade is D");
    }
    else { printf(" Fail");
    }
    
    return 0;
}