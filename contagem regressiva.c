
#include <stdio.h>

int main()
{
    int num;
    
    printf("Digite um numero inteiro positivo: ");
    scanf("%i", &num);
    
    for(num; num>= 0; num--)
    printf("%i\n", num);

    return 0;
}
