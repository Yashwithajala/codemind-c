#include<stdio.h>
int main()
{
    int n,s=0,b;
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        b=n%i;
        if(b==0){
            s+=i;
        }
    }
    if(s==n){
        printf("True");
    }
    else {
        printf("False");
    }
}