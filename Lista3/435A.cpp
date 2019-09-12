#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,m, quant = 1;

    cin >> n >> m;

    vector<int> gs(n);

    int mAux = m;

    for (int i = 0; i < n; i++){
        cin >> gs[i];
    }

    for (int j = 0; j < n; j++){
        if(m >= gs[j]){
            m -= gs[j];
            //cout << quant << endl;
            //cout << "aqui" << endl;
        } else if(m < gs[j]) {
            quant++;
            m = mAux;
            m -= gs[j];
            //cout << quant << endl;
            //cout << "ali" << endl;
        }
    }

    cout << quant << endl;

    return 0;
}