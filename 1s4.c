#include <stdio.h>
#include<conio.h>
int main()
{
char i;
    printf("Enter a character: ");
    scanf("%c",&i);
    if( (i>='a' && i<='z') || (i>='A' && i<='Z'))
        printf("%c is an alphabet.",i);
    else
        printf("%c is not an alphabet.",i);
    getch();
}
