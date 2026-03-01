#include <stdio.h>

int potenciacao(int base, int potencia){ //inicio da função que vai calcular a potenciação;
    if (potencia == 0){ //qualquer numero elevado a 0 é 1; 
        return 1;
    } else { //inicio da recursividade
        return base*potenciacao(base,potencia-1);   
    } 
    }

int main(){
    int x, y; 

    printf("Digite a base: ");
    scanf("%d", &x);
    printf("\n Digite a potencia: ");
    scanf("%d", &y);

    printf("%d elevado a %d = %d", x, y, potenciacao(x,y)); 
} 
