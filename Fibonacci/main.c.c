
#include <stdio.h>

int main()
{
   int n, v1, v2, v3, contador;
   v1 = 0;
   v2 = 1;

    printf("Digite a contidade de numeros desejados: "); 
    scanf("%i", &n);
    printf("\n\nSerie de fibonacci:\n\n");
    printf("\t%i\n", v2);
    
    for(contador = 1; contador<=n;contador++)
    {

    v3= v1 + v2;
    v1 = v2; 
    v2 = v3;
    printf("\t%i\n ",v3);

    }
    
    
    

    return 0;
}
