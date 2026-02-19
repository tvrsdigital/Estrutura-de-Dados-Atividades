#include <stdio.h>

int potencia (int x, int y){
    if (y == 0){
        return 1; //caso trivial, todo numero^0 = 1 
    } else{
        return x * potencia(x, y-1); //recursão
    }

}


int main()
{
    int base, expoente;
    printf("Digite a base (ou x): ");
    scanf("%d", &base); 
    printf("\n Digite o expoente (ou y): ");
    scanf("%d", &expoente); 
    printf("\n %d elevado a %d e igual a %d", base, expoente, potencia(base, expoente)); 
    return 0;
}