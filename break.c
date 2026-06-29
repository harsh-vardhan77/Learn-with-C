#include<stdio.h>
int main()
{
int i, age;
for(i=0; i<10; i++)
{
printf("%d\nEnter your age\n", i);
scanf("%d", &age);
if(age>10)
{
break;
}
}
// The loop will terminate if the user enters an age greater than 10
//output:
// 0
//Enter your age
// 5
// 1
    return 0;
}
