#include<stdio.h>
#define PI 3.14159
int main()
{
   { int a = 5;
    float b = 3.2;
    
    // Example 1: Basic format specifiers
    printf("the value of a is %d, and the value of b is %f\n", a, b);
    
    // Example 2: Formatted float output (8 width, 7 decimal places)
    printf("%8.7f\n", b);
   }
   // Output:
// the value of a is 5, and the value of b is 3.200


   //example of constants
    {
    const int c = 10;
    const float d = 6.4;
   // d=7.5; // This line will cause a compilation error because 'd' is a constant and cannot be modified.
    printf("the value of c is %d, and the value of d is %f\n", c, d);
    }
    // Output:
// the value of c is 10, and the value of d is 6.400
{
int a = 5;
    float b = 3.2;
    // PI=7.33; // This line will cause a compilation error because 'PI' is a macro constant and cannot be modified.
    printf("%f",PI);
}
// Output:
// 3.141590
    return 0;
}

