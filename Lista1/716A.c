#include <stdio.h>
#include <stdlib.h>

int main(){

    int num, c;
    int count=1;

    scanf("%d%d",&num,&c);

    int vet[num];

    for(int i=0;i<num;i++){
        scanf("%d",&vet[i]);
    }

    for(int i=1;i<num;i++){
        if(vet[i]-vet[i-1]<=c) count++;
        else count=1;
    }

    printf("%d\n",count);

    return 0;
}