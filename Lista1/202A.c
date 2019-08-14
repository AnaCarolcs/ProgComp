#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {

    int vet[40]={0};
    int aux=0;
    char vetChar[20];

    scanf("%s", vetChar);

    int size = strlen(vetChar);

    for(int i = 0; i < size; i++){ //Para percorrer a palavra
      vet[vetChar[i]-'a']++;
    }

    for(int i=27; i>=0; i--){ //27 é a quantidade de letras no alfabeto
      if(vet[i]>0 && aux==0){
        while(vet[i]>0){
          printf("%c", i+'a');
          aux=1;
          vet[i]--;
        }
          printf("\n");
      }
    }

    return 0;
}