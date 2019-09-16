    #include <bits/stdc++.h>

    using namespace std;

    int main(){

        int n, h, tempo, anterior = 0;

        cin >> n;

        /*vector<int> vet;

        for (int i = 0; i < n; i++){
            cin >> h;
            vet.push_back(h);
        }*/

        tempo = n;
        tempo = n + (n-1);
        //tempo++; //Subir a primeira arvore

        while(n--){
            cin >> h;
            tempo += abs(anterior-h);
            anterior = h;
        }

        /*while(n--){
            //for (int j = 0; j < n; j++){
                //if(vet[j] >= vet[j+1]){
                    tempo++; //pular
                    cout << "pular" << endl;
                //}else if(vet[j] < vet[j+1]){
                    tempo += 2; //descer e subir proxima arvore
                    cout << "descer e subir" << endl;
                }
                n--;
            }
        }*/

        cout << tempo << endl;

        return 0;
    }