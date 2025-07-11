#include<stdio.h>
#include<conio.h>
int loop(int n);

void main()
{
    int a,n;
    printf("enter the no.\n");
    scanf("%d", &n);
    printf("%d\n", loop(n));
}
int loop(int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+i;
        if(sum==15)
        {
            printf("sum of n no.\n", sum);
    
        }
        printf("sum of n no. %d\n", sum);
    }
}