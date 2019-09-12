#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, k, val, aux = 0, count = 0, a=0;

    cin >> n >> k;

    pair<int, int> par;
    vector<pair<int, int>> vetPar;

    for(int i = 0; i < n; i++){
        cin >> val;
        par = make_pair(val, i);
        vetPar.push_back(par);
        if(vetPar[i].first > k){
            aux++;
        }
    }

    sort(vetPar.begin(), vetPar.end());

    if(aux >= n){
        cout << "0";
    } else {

        for (int d = 0; d < n; d++){
            if(vetPar[d].first <= k){
                k -= vetPar[d].first;
                count++;
            }
        }

        cout << count << endl;

        for (int i = 0; i < count; i++){
            a = vetPar[i].second + 1;
            cout << a << " ";
        }
    }

  return 0;
}