#include<stdio.h>
#include<string.h>
void main()
{
    char name[50];
    int n;
    printf("Enter Your Name:\n");
    scanf("%s",name);
    printf("Enter Value of n:\n");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        printf("%s\n",name);
    }
}