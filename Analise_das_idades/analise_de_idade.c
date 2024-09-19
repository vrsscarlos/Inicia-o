#include <stdio.h>

int main()
{
    int numero_de_pessoas;
    int ano[2000];
  
        printf("                  Digite a quantidade de indivíduos: ");
        scanf("%d", &numero_de_pessoas);
          for(int i = 1; i <= numero_de_pessoas; i++){
            printf("\nDigite o ano de nascimento do indivíduo %d: ", i);
            scanf("%d", &ano[i]);
            if(ano[i] > 2024 || ano[i] <1900){
              printf("\nAno inválido, digite novamente.\n");
              i--;
            }
          }
          for(int a = 1; a <= numero_de_pessoas; a++)
            if(ano[a] <= 2006){
              printf("\nO indivíduo %d está liberado!\n", a);
            }
              else if(ano[a] > 2006){
                printf("\nO indivíduo %d não está liberado!\n", a);
              }
        

return 0;
}