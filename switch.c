#include<stdio.h>   
int main()    
{    
    int age;    
    printf("Enter the age\n");    
    scanf("%d", &age);    
    switch(age)    
    {    
        case 1:    
            printf("The age is 1");    
            break;    
        case 2:    
            printf("The age is 2");    
            break;    
        case 3:    
            printf("The age is 3");    
            break;    
        default:    
            printf("The age is not between 1 and 3");    
    } 
    // The break statement is used to terminate the switch statement. If break is not used, the program will continue to execute the next case statements until it finds a break or reaches the end of the switch statement.
    //output: 
    //enter the age
    //5
    // The age is not between 1 and 3   
    return 0;  
}