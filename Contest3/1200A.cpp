    #include <bits/stdc++.h>

    using namespace std;

    int main(){

        int n, k, aux = 48, quantQuarto = 0, posicao = 0;
        string s, resultado;

        cin >> n;
        cin >> s;

        set<int> quarto;

        while(quantQuarto < 10){
            resultado.push_back('0');
            quarto.insert(quantQuarto);
            quantQuarto++;
        }

        while(n--){
            if(s[posicao] == 'R'){
              k = *quarto.rbegin();
              quarto.erase(k);
              resultado[k] = '1';
            }else if(s[posicao] == 'L'){
                k = *quarto.begin();
                quarto.erase(k);
                resultado[k] = '1';
            }else{
                k = s[posicao] - aux;
                resultado[k] = '0';
                quarto.insert(k);
            }
            posicao++;
        }

        cout << resultado << endl;

        return 0;
    }