#include<stdio.h>
int main()
{
    int add=0;
    for(int i=0; i<=100; i++)
    {
        if(i%13==0)
        {
        printf("%d\n",i);
        add=add+i;
        }
    }
    printf("%d\n",add);
}