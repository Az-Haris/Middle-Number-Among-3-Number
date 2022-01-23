#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int num1, num2, num3;

    printf("Please Enter 3 Number : ");
    scanf("%d%d%d", &num1, &num2, &num3);

    if(((num1>num2)&&(num1<num3)) || ((num1<num2)&&(num1>num3)))
    {
        printf("%d is the middle number", num1);
    }

    else if(((num2>num1)&&(num2<num3)) || ((num2<num1)&&(num2>num3)))
    {
        printf("%d is the middle number", num2);
    }

    else if (((num3>num1)&&(num3<num2)) || ((num3<num1)&&(num3>num2)))
    {
        printf("%d is the middle number", num3);
    }

    else
    {
        printf("Error...");
    }

    getch();
    return 0;
}
