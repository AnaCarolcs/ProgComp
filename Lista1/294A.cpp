 #include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>

using namespace std;


int main(){

    int a[100];
    int n, m, x, y, direita, esquerda;
    int count = 1;

    while(scanf("%d", &n) == 1){ //primeira linha

        for(int i=1; i<=n; i++)
            scanf("%d", &a[i]);//segunda linha

        scanf("%d", &m);//terceira linha

        for(int j=1; j<=m; j++){
            scanf("%d%d", &x, &y);//Inteiros X e Y pedido no problema

            if( (x-1) >= 1){
                esquerda = y-1;
                a[x-1] = a[x-1] + esquerda;
            }
            if( (x+1) <= n ){
                direita = a[x]-y;
                a[x+1] = a[x+1] + direita;
            }

            a[x] = 0;
        }

            while(count <= n){
            printf("%d \n", a[count]);
            count++;
        }
    }
}