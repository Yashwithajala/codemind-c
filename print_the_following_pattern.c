#include<stdio.h>
int main()
{
int n,i,j;
scanf("%d",&n);
for(i=n;i>0;i--)
    {
for(j=n;j>0;j--)
    {
        printf("%d ",j);
    }
    printf("
");
        }
}