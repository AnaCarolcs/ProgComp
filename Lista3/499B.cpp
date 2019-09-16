#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, m;

    cin >> n >> m;

    string a, b, c;
    map<string, string> mStr;

    for (int i = 0; i < m; i++){
        cin >> a >> b;
        if(a.length() <= b.length()){
            mStr[a] = a;
        }else{
            mStr[a] = b;
        }
    }

    while(n){
        if(n != 0){
            cout << " ";
        }
        cin >> c;
        cout << mStr[c];
        n--;
    }

    cout << endl;

    return 0;
}