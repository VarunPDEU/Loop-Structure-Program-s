#include<stdio.h>
#include<string.h>
void main()
{
    char name[50];
    printf("Enter Your Name:\n");
    scanf("%s",name);
    for(int i=1; i<5; i++)
    {
        printf("%s\n",name);
    }
}