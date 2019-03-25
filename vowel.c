#include <stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    char a;
    printf("enter a alphabet");
    scanf("%c",&a);
    if ( a=='a'|| a=='e'|| a=='i'|| a=='o'|| a=='u'|| a=='A'|| a=='E'|| a=='I'|| a=="O"|| a=="U")
    printf("vowel");
    else
    printf("consonent");
    getch();
}
