#include<stdio.h>
#include<conio.h>
int main()
{
    int g,s,x,y,gold,sil;
    printf("Enter coins per gram of gold=");
    scanf("%d",&g);
    printf("Enter coins per gram of silver=");
    scanf("%d",&s);
    printf("Grams of gold=");
    scanf("%d",&x);
    printf("Grams of silver=");
    scanf("%d",&y);

    printf("%d %d %d %d\n",g,s,x,y);

    gold=g*x;
    sil=s*y;
    
    if (gold>sil)
    printf("GOLD");
    else
    printf("SILVER");

    getch();
    return 0;
}