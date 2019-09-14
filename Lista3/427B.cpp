#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, t, c, preso, aux = 0, res = 0;

    cin >> n >> t >> c;

    //vector<int> p;

    for (int i = 0; i < n; i++){
        cin >> preso;
        //p.push_back(preso);

        if(preso <= t){
            aux++;
        } else {
            if(aux >= c){
             res += (aux - (c-1));
            }
            aux = 0;
        }
    }

    if (aux >= c) {
        res += (aux - (c-1));
    }

    cout << res << endl;

    return 0;
}