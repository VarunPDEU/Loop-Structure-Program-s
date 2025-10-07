#include<stdio.h>
int main()

{
    int i,n,add=0;
    printf("Enter Value Of n:\n");
    scanf("%d",&n);
    i=0;
    while(i<n)
    {
        i++;
        printf("%d\n",i);
        add+=i;
    }
    printf("%d",add);
}