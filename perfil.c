
#include <stdio.h>

int main()
{
    int dia, mes, ano, perfil;
    
    printf("Digite o dia que nasceu: ");
    scanf("%i", &dia);
    printf("Digite o mês que nasceu: ");
    scanf("%i", &mes);
    printf("Digite o ano que nasceu: ");
    scanf("%i", &ano);
    
    perfil = (dia *100) + mes + ano;
    perfil = perfil/100 + perfil - (perfil/100)*100;
    perfil = perfil % 5;
    printf("Seu perfil e: ");
    
    switch(perfil)
    {
        case 0:
        printf("Timido");
        break;
        
        case 1:
        printf("Sonhador");
        break;
        
        case 2:
        printf("Paquerador");
        break;
        
        case 3:
        printf("Atraente");
        break;
        
        case 4:
        printf("Irresistivel");
        break;
    }
    
    
    
    return 0;
}

