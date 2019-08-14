#include <stdio.h>

int main(){

    int quantidadeQuartos,ocupantes,capacidade,contador=0;

    scanf("%d",&quantidadeQuartos);

    for(int i=0; i<quantidadeQuartos; i++){ //percorrer a quantidade de quartos
      scanf("%d%d",&ocupantes,&capacidade);
      if(capacidade-ocupantes>=2){ //Verificar se cabe 2 pessoas
        contador++;
      }
    }

    printf("%d\n",contador);
    return 0;
}