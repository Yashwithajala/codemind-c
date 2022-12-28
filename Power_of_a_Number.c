#include<stdio.h>
#include<math.h>
int main()
{
    int n,p,m,f,s;
    scanf("%d%d%d",&n,&p,&m);
    f=pow(n,p);
    s=f%m;
    printf("%d",s);
}