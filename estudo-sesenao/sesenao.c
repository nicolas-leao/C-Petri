#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int  nota = 0;

printf("Digite sua nota: ");
scanf ("%d", &nota);

if (nota > 30 && nota < 60) {
    printf("Voce tera que fazer a sub \n");
} else {
    printf("Parabens");
}


}