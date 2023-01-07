#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,x=0;
    printf("Enter First non-negative integer=");
    scanf("%d",&a);
    printf("Enter second non-negative integer=");
    scanf("%d",&b);

    if (a==0 && b==0)
    printf("Smallest non-negative integer= %d",++x);

    if (a==0 || b==0)
    {
        if (a==1 || b==1)
        printf("Smallest non-integer= %d",x+2);
    }

    if (a==2 || b==2)
    printf("Smallest non-negative integer= %d",++x);

    if (a>0 && b>0)
    printf("Smallest non-negative integer= %d",x);
    
    
    getch();
    return 0;
}