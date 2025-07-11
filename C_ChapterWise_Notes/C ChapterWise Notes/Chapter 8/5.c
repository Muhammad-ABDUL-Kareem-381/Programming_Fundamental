#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char gf[]="fight";
    char youth[10];
    char go[]="with power";

    int length = strlen(gf);
    printf("%d\n", length);

    strcpy(youth,gf);
    printf("%s\n", youth);

    strcat(gf,go);
    printf("%s\n", gf);

    int num=strcmp(gf,go);
    printf("%d\n", num);
}