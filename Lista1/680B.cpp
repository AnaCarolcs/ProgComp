#include <bits/stdc++.h>

using namespace std;

int main() {

    int cidades,index,count=0,i = 1, k = 0;

    cin>>cidades>>index;

    int arr[cidades];

    while(k< cidades){
         cin>>arr[k];
         k++;
    }

    --index;

    if(arr[index])++count;

    while(i<cidades){

        int direita,esquerda;

        direita=index+i;
        esquerda=index-i;

        if(esquerda>=0||direita<cidades){
            if(esquerda>=0&&direita<cidades){
                if(arr[direita]&&arr[esquerda]){
                   count+=2;
               }
            }else if(esquerda>=0){
                if(arr[esquerda]){
                   ++count;
               }
            }else if(direita<cidades){
                if(arr[direita]){
                    ++count;
                }
            }
        }

        i++;
    }

    cout<<count<<endl;

    return 0;
}