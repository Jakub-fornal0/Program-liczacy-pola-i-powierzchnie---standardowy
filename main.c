#include "pola.h"
#include "objetosci.h"
#include <stdio.h>
#include <stdlib.h>
#include "pola.c"
#include "objetosci.c"

int main(){
    int a, b, h;
    printf("Podaj dlugosc boku.");
    scanf("%d",&a);
    printf("Podaj dlugosc drugiego boku.");
    scanf("%d",&b);
    printf("Podaj wysokosc.");
    scanf("%d",&h);
    printf("Pole prostokata o podanych bokach: %d",poleProstokat(a,b));
    printf("Pole prostopadloscianiu o podanych bokach: %d",poleProstopadloscian(a,b,h));
    printf("Objetosc prostopadloscianiu o podanych bokach: %d",objetoscProstopadloscian(a,b,h));
    return 0;
}
