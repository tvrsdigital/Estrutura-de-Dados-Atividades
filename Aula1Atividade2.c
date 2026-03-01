#include <stdio.h>
int fibonacci(int n){ //inicio da função que calcula a sequencia de fibonacci 
    if (n<=1) { return n; } //a sequencia inicia com 0 e 1; 
    return fibonacci(n-1) + fibonacci(n-2); //a sequencia ira somar os dois anteriores para achar o proximo numero 
}
int main(){
    int x, i; 
    printf ("Digite a quantidade de numeros na sequencia: ");
    scanf("%d", &x); 

    for (i=0; i<x; i++){ //inicia um loop para calcular e mostrar cada um dos itens na sequencia 
        printf("%d ", fibonacci(i));
    } 
    printf("\n"); 
    return 0; 
}