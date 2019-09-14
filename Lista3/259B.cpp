#include <bits/stdc++.h>

using namespace std;

int main(){

    int v11, v12, v13;
    int v21, v22, v23;
    int v31, v32, v33;
    int media;

    cin >> v11 >> v12 >> v13;
    cin >> v21 >> v22 >> v23;
    cin >> v31 >> v32 >> v33;

    media = (v12 + v13 + v21 + v23 + v31 + v32)/2; //descobri o valor "magico"

    cout << media - v12 - v13 << " " << v12 << " " << v13 << endl;
    cout << v21 << " " << media - v21 - v23 << " " << v23 << endl;
    cout << v31 << " " << v32 << " " << media - v31 - v32 << endl;

    return 0;
}