#include<stdio.h>
int main()
{
    int a = 5;
    float b = 3.2;
    
    // Example 1: Basic format specifiers
    printf("the value of a is %d, and the value of b is %f\n", a, b);
    
    // Example 2: Formatted float output (8 width, 7 decimal places)
    printf("%8.7f\n", b);
    
    return 0;
}
// Output:
// the value of a is 5, and the value of b is 3.200
