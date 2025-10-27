#include<stdio.h>
int main()
{
    float a[10],add=0,mean;
    for(int i=1; i<=10; i++)
    {
        printf("Enter 10 Numbers:");
        scanf("%f",&a[i]);
        add+=a[i];
    }
    printf("Sum:%f\n",add);
    mean=add/10;
    printf("Mean=%f\n",mean);
}