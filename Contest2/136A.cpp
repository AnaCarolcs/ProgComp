#include <bits/stdc++.h>

using namespace std;


int main(){

    int convidados, presentes[100];
    cin >> convidados;

    for (int i = 1; i <= convidados; i++){
        int deu;
        cin >> deu;
        presentes[deu] = i;
    }

    for(int i = 1; i <= convidados; i++){
      cout << presentes[i] << " ";
    }

    cout << endl;

return 0;
}