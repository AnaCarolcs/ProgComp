#include <bits/stdc++.h>

using namespace std;

int main(){

    int m, a, val = 0;
    //int cartas = 0;

    vector<int> bs;
    vector<int> cc;

    cin >> m;

    for (int i = 0; i < m; i++){
        cin >> a;
        bs.push_back(a);
    }

    sort(bs.begin(), bs.end(), greater<int>());

    for (int i = 0; i < m; i++){
        if(bs[i] == bs[i+1]){
            cc.push_back(bs[i]);
            bs.erase(bs.begin()+i);
        }
    }

    sort(cc.begin(), cc.end());

    for (int i = 0; i < cc.size(); i++){
        if(cc[i]++ == cc[i+1]){
            val++;
        }
    }

    int sz = cc.size();

    if(cc[sz] == bs[0]){
        cc.erase(cc.end());
    }

    if(val == cc.size()){
        cout << cc.size() + bs.size() << endl;
        for (int i = 0; i < m; i++){
            cout << cc[i] << " ";
        }
        for (int i = 0; i < m; i++){
            cout << bs[i] << " ";
        }
    }else{
        cout << bs.size() << endl;
        for (int i = 0; i < m; i++){
            cout << bs[i] << " ";
        }
    }

    return 0;
}