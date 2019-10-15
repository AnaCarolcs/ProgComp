#include<bits/stdc++.h>

using namespace std;

int main(){

    string a, b;

    cin >> a >> b;

    int quantidade=0;

    for (int i = 0; i < a.length(); i++){
        if(a.compare(i,b.length(),b) == 0){
            quantidade++;
            i=b.length()-1+i;
        }
    }

    cout << quantidade << endl;

  return 0;
}