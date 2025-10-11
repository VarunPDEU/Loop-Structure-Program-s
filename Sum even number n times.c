#include<stdio.h>
int main()
{
    int n,add=0;
    printf("Enter Value Of n:");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        printf("%d\n",i*2);
        add=add+i*2;
    }
    printf("%d",add);
}