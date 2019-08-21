#include <bits/stdc++.h>

using namespace std;

int main(){

    int hamsters, res = 0;
    while(cin>>hamsters){

        char posicao[hamsters];
        int aux1=0,aux2=0;

        cin>>posicao;

        for(int i=0; i<hamsters; i++){
            if(posicao[i]=='x'){
                aux1++;
            } else if(posicao[i]=='X'){
                aux2++;
            }
        }

        int meioHamster = hamsters/2-min(aux2,aux1);
        int t = meioHamster;

        if(aux1>aux2){
                for(int j=0; j<hamsters; j++){
                    if(posicao[j]=='x' && t!=0){
                        posicao[j]='X';
                        t--;
                    }
                }
        }

        if(aux1<aux2){
                for(int j=0; j<hamsters; j++){
                    if(posicao[j]=='X' && t!=0){
                        posicao[j]='x';
                        t--;
                    }
                }
        }

        cout<<meioHamster;
        cout<<endl;

        while(res < hamsters){
            cout<<posicao[res];
            res++;
        }

        cout<<endl;
    }

    return 0;
}