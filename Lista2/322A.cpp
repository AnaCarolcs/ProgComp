#include <bits/stdc++.h>

using namespace std;

int main(){

    int garoto, garota, musicas, aux1 = 1, aux2 = 1;

    cin >> garoto >> garota;

    musicas = garoto + garota -1;

    cout << musicas << endl;

    for(int i = 0; i < musicas; i++){
        cout << aux1 << " " << aux2 << endl;
        if(aux2 < garota){
            aux2++;
        }else if(aux1 < garoto){
            aux1++;
        }
    }

    return 0;
}