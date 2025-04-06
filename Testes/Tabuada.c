#include <stdio.h>

int main () {

    int i, number;

    printf("Digite um número para calcular a tabuada: ");
    scanf("%d", &number);
    printf("Segue a tabuada do número: %d \n", number);

    for (i = 0; i <= 10; i++)
{
    printf("%d x %d = %d \n", number, i, number * i);
}

return 0;

}