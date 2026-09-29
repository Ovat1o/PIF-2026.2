#include <stdio.h>

int main(){

    int seg = 0, min = 0, hora = 0, dia = 0;

    do{
        printf("Insira os segundos: ");
        scanf("%d", &seg);
    } while (seg <= 0); {
        printf("Insira um valor maior que zero.");
    }
    
    if (seg >= 60) {
        min = seg / 60;
    } else {
        printf("%d segundos -> 0 dia, 0 hora, 0 min e %2.d segundo", seg, seg);
    }

    if (seg >= 3600) {
        hora = seg / 3600;
    } else if (seg < 3600) {
        printf("%d segundos -> 0 dia, 0 hora, %d min e %2.d segundo", seg, min, seg);
    }

    if (seg >= 86400) {
        dia = seg / 86400;
        printf("%d segundos -> %d dia, %2.d hora, %d min e %2.d segundo", seg, dia, hora, min, seg);
    } else if (seg < 86400) {
        printf("%d segundos -> 0 dia, %2.d hora, %d min e %2.d segundo", seg, hora, min, seg);
    }
    
    return 0;
}