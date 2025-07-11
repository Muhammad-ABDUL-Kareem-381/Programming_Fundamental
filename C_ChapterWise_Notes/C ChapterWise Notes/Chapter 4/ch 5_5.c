#include<stdio.h>
#include<conio.h>
int fibo(int );

void main()
{
    int n,d;
    printf("enter the value\n");
    scanf("%d", &n);
    d = fibo(n);
    printf("%d\n", d);

}
int fibo(int n)
{
    int a;
    a = (n-1) + (n-2);
    return a;
}