#include <bits/stdc++.h>

using namespace std;

int main(){

    int numRetangulo,x1,x2,y1,y2;
    int resposta = 0;

    cin >> numRetangulo;

    for (numRetangulo; numRetangulo > 0; --numRetangulo){

        cin >> x1 >> y1;
        cin >> x2 >> y2;

        for(int i = x1;i<=x2;i++){
            for(int j = y1;j<=y2;j++){
                resposta++;
            }
        }

    }

    cout << resposta << endl;

    return 0;
}