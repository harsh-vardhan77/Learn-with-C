#include <stdio.h>

int main()
{
    int a,b;
    a=34;
    b=6;
    //arithmetic operators
    printf("a+b=%d\n",a+b);
    printf("a-b=%d\n",a-b);
    printf("a*b=%d\n",a*b);
    printf("a/b=%d\n",a/b);

//output
//a+b=40
//a-b=28
//a*b=204
//a/b=5
{
 int a;
 float b;
    a=76;
    b=6.345;
    
    printf("a+b=%f\n",a+b);
    printf("a-b=%f\n",a-b);
    printf("a*b=%f\n",a*b);
    printf("a/b=%f\n",a/b);
}
//output
//a+b=82.345000
//a-b=69.655000
//a*b=482.220000
//a/b=12.000000
{
 int a;
 float b;
    a=76;
    b=76;
    //relational operators
    printf("a+b=%f\n",a==b);
    printf("a-b=%f\n",a!=b);
    printf("a*b=%f\n",a<=b);
    printf("a/b=%f\n",a>=b);
}
//output
//a+b=1.000000
//a-b=0.000000
//a*b=1.000000
//a/b=1.000000
{
int a=60;
int b=60;
//logical operators
    printf("a&&b=%d\n",a&&b);
    printf("a||b=%d\n",a||b);
    printf("!a=%d\n",!a);
}
//output
//a&&b=1
//a||b=1
//!a=0

    return 0;
}
