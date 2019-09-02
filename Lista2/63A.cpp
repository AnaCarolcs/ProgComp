#include <bits/stdc++.h>

using namespace std;

int main(){

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

        int n, opc = 0;
        string nome,tipo,capitao;

        cin >> n;

        vector<string> mulher;
        vector<string> homem;
        vector<string> rato;

        for(int i=1;i<=n;i++){

            cin >> nome;
            cin >> tipo;

            if(tipo=="captain"){
              opc = 1;
            } else if (tipo=="rat"){
              opc = 2;
            } else if (tipo=="woman" || tipo=="child"){
              opc = 3;
            } else if (tipo=="man"){
              opc = 4;
            }

            switch(opc){
              case 1:
              capitao=nome;
              break;

              case 2:
              rato.push_back(nome);
              break;

              case 3:
              mulher.push_back(nome);
              break;

              case 4:
              homem.push_back(nome);
              break;

              default:
              break;
            }

        }


        for(int i=0;i<rato.size();i++){
            cout << rato[i] << endl;
        }

        for(int i=0;i<mulher.size();i++){
            cout << mulher[i] << endl;
        }

        for(int i=0;i<homem.size();i++){
            cout << homem[i] << endl;
        }

        cout << capitao << endl;

        return 0;
}