#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=30*b;
    if(c<=a){
        printf("YES");
    }
    else {
        printf("NO");
    }
}