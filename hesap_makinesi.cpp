

#include<stdio.h>

/*
D�rt i�lem yapabilen bir program
*/

#include <stdio.h>

int main() {
    float sayi1, sayi2;


    char op;

    printf("Islem yapmak istediginiz iki sayiyi girin: ");
    scanf("%f %f", &sayi1, &sayi2);
    printf("Hangi islemi yapmak istersiniz? ");
    scanf(" %c",&op);

    switch(op) {
        case  '+':
            printf("%.2f + %.2f = %.2f\n", sayi1, sayi2, sayi1 + sayi2);
            break;
        case  '-':
            printf("%.2f - %.2f = %.2f\n", sayi1, sayi2, sayi1 - sayi2);
            break;
        case  '*':
            printf("%.2f * %.2f = %.2f\n", sayi1, sayi2, sayi1 * sayi2);
            break;
        case  '/':
            if (sayi2 != 0) {
                printf("%.2f / %.2f = %.2f\n", sayi1, sayi2, sayi1 / sayi2);
            } else {
                printf("Hata: Sifira b�lme hatasi!\n");
            }
			break;
        
        default:
            printf("Gecersiz islem operat�r�!\n");
			break;
    }

    return 0;
}

