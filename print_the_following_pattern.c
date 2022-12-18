#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(char i=64+n;i>=65;i--)
    {
        for(char j=i;j>=65;j--)
        {
            for(j=i;j>=65;j--)
            printf("%c ",i);
            printf("
");
        }
    }
}