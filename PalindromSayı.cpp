#include <stdio.h>
#include <stdlib.h>




int main()
{
    int sayi,a,b,c,d;

    printf("4 basamakli bir sayi girin.\n");
    scanf("%d",&sayi);
    a=(sayi/1000)%10;
    b=(sayi/100)%10;
    c=(sayi/10)%10;
    d=sayi%10;

    if(a==d && b==c)
    printf("sayi palindromdur\n");

    else
    printf("sayi palindrom degil\n");

    system ("PAUSE");
    return 0;



}
