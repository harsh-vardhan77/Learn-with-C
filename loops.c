//Do while loop
#include <stdio.h>

int main() {
    int num, index = 0;
        printf("enter a number: ");
        scanf("%d", &num);
          do {
              printf("%d\n", index);
              index=index +1;
          } while (index<num);
//output:
//enter a number: 5
//0
//1
//2
//3
//4
{
    int i= 0;
    while(i<30){
        printf("%d\n", i);
        i=i+1;
    }
}
//output:
//enter a number: 35
//0
//1
//2
//3
//4
//5
//6
//7
//8
//9
//10
//11
//12
//13
//14
//15
//16
//17
//18
//19
//20
//21
//22
//23
//24
//25
//26
//27
//28
//29

    return 0;
}