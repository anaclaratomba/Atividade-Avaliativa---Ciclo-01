#include <stdio.h>


int main()
{
    int tabuada, x;
    
    printf(" Digite um numero inteiro positivo: ");
    scanf("%i", &tabuada);
    
    
    for(x = 1; x <= 10; x++)
        printf("%i * %i = %i\n", tabuada, x, tabuada * x);
    
    
    
    return 0;
}
