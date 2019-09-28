  #include<bits/stdc++.h>

  using namespace std;

  int main(){

      int n, k, aux, nma,it = 1;
      char c = 'a';

      char alf[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

      cin >> n >> k;

      if(n < k){
          cout << "-1" << endl;
          return 0;
      } else if(n == 1 && k == 1){
          cout << "a" << endl;
          return 0;
      } else if(k < 2){
          cout << "-1" << endl;
          return 0;
      }

      aux = k - 2;
      nma = n - aux;
      while(nma--){
          if(it % 2 == 1){
              cout << alf[0];
          } else {
              cout << alf[1];
          }
          it++;
      }

      for (int i = 2; i < aux + 2; i++){
          cout << alf[i];
      }

      return 0;
  }