#include <stdio.h>
#include <locale.h>

int main() {
    int num;

    printf("Digite um numero:\n");
    scanf("%d", &num);
    
    if (num > 0) {
    printf("O numero e positivo.\n");
    } 
	else if (num < 0) {
    printf("O numero e negativo.\n");
    } else {
    printf("O número é zero.\n");
    }

    return 0;
}
