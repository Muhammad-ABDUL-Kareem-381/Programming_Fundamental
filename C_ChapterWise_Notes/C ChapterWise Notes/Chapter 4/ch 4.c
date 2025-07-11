#include<stdio.h>
#include<conio.h>

void main()
{
    int a;
    printf("Enter the no.\n");
    scanf("%d", &a);
    while (a<=20)
    {
        if(a>=10)
        {
            printf("10 to 20 no.%d\n", a);
        }
        a--;
    }
    
}