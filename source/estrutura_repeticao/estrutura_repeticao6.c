#include <stdio.h>

int main(void) {

/*Imprimir na tela os números de 1 a 20, um abaixo do outro.
/// Depois modifica o programa para que ele mostre os números um ao lado do outro.//*/

    for(int contador = 1; contador <= 20; contador++) {
        printf("%d\n", contador);
    }

    for(int contador = 1; contador <= 20; contador++) {
        printf("%d", contador);
    }

    return 0;
}
