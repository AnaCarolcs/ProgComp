    #include <iostream>

    using namespace std;

    int main(){

      int pessoas, aux = 0;

      cin >> pessoas;

      for (int i = 0; i < pessoas; ++i){
        int resposta = 0;
        cin >> resposta;
        if (resposta == 0){
          aux++;
        }
      }

      //cout << aux<< endl;

      if (aux == pessoas){
        cout << "EASY" << endl;
      } else {
        cout << "HARD" << endl;
      }


    return 0;

    }

