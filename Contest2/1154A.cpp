    #include<bits/stdc++.h>

    using namespace std;

    int main() {

        int vet[4];

        for(int i = 0; i < 4; i++){
            cin >> vet[i];
        }

        sort(vet, vet + 4);

        int a = vet[3] - vet[0];
        int b = vet[3] - vet[1];
        int c = vet[3] - vet[2];

        cout << a << " " << b << " " << c << endl;

        return 0;
    }

