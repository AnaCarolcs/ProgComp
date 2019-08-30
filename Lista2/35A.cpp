#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    
    int x, posicao1[3] = {0},posicao2[3] = {0}, posicao3[3] = {0}, index = 0;
 
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cin >> x;
 
    for (int i = 0; i < 2; i++){
        cin >> posicao1[i];
    }
 
    for (int j = 0; j < 2; j++){
        cin >> posicao2[j];
    }
    
    for (int g = 0; g < 2; g++){
        cin >> posicao3[g];
    }
 
    if(posicao3[2] == 0 && posicao3 [1] == 0){
        if(posicao3[0] != 3){
            index = posicao3[0] + 1;
        } else {
            index = posicao3[0] - 1;
        }
    } else if (posicao3[2] == 0 && posicao3[1] != 0){
        if(posicao3[1] != 3){
            index = posicao3[1] + 1;
        } else {
            index = posicao3[1] - 1;
        }
    } else {
        if(posicao3[2] != 3){
            index = posicao3[2] + 1;
        } else {
            index = posicao3[2] - 1;
        }
    }
 
    cout << index << endl;
 
    return 0;
}