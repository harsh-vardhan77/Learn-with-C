#include <stdio.h>
int main() {
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    if (age >= 18) {
        printf("You can vote\n");
    } else {
        printf("You cannot vote\n");
    }
//output
// Enter your age
//45
//You can vote
{
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    if (age >=18) {
        printf("You can vote\n");
    } else if (age >= 16) {
        printf("You can drive\n");
    } else {
        printf("You cannot vote or drive\n");
    }
}
//output
// Enter your age
//Enter your age
//4
//You cannot vote or drive
    return 0;
}