#include<stdio.h>
int main()
{
    int a,i,Factorial=1;
    printf("Enter Value Of Number For Factorial:\n");
    scanf("%d",&a);
    for(int i=1; i<=a; i++)
    {
        Factorial=Factorial*i;
    }
       printf("%d",Factorial);
}