#include<stdio.h>
int main()
{
    int i, number, f=0;
    scanf("%d", &number);

    if(number == 1 || number == 0){
        printf("True");
        f=1;
    }

    for(i = 2; i <= number/2; i++)
    {
        if(number == i*i)
        {
            printf("True");
            f=1;
            break;
        }
    }
    if(f== 0)
        printf("False");
}