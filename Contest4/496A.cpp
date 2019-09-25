#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, ai,h = 1000, max = 0, max1= 0, posicao;

    vector<int> parede;

    cin >> n;

    for (int i = 0; i < n; ++i){
        cin >> ai;
        parede.push_back(ai);
    }

    for(int i = 0; i < n - 1; i++){
        if(parede[i+1] - parede[i] > max){
            max = parede[i+1]-parede[i];
            posicao = i;
        }
    }

    for(int i = 0; i < n-2; i++){
        if(parede[i+2] - parede[i] < max){
            max1 = max;
        } else {
            max1 = parede[i+2] - parede [i];
        }
        h = min(max1, h);
    }

    cout << h << endl;

    return 0;
}