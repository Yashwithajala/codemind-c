#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==j)
            printf("0");
            if(j<=n-1)
            printf("x");
        }
        printf("
");
    }
}