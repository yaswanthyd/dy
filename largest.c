#include <stdio.h>
int main()
{
    double y1, y2, y3;

    printf("Enter three different numbers: ");
    scanf("%lf %lf %lf", &y1, &y2, &y3);

    if( y1>=y2 && y1>=y3 )
        printf("%f is the largest number.", y1);

    if( y2>=y1 && y2>=y3 )
        printf("%f is the largest number.", y2);

    if( y3>=y1 && y3>=y2 )
        printf("%f is the largest number.", y3);

    return 0;
}
