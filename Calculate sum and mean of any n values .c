#include<stdio.h>
int main()
{
    float a[10],add=0,mean;
    int n;
    printf("Enter Value Of n :");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        printf("Enter %d Numbers:",n);
        scanf("%f",&a[i]);
        add+=a[i];
    }
    printf("Sum:%f\n",add);
    mean=add/n;
    printf("Mean:%f\n",mean);
}