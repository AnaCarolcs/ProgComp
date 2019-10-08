  #include<bits/stdc++.h>

  using namespace std;

  int main(){

      int n, d, res = 0;
      vector<int> dias;

      cin >> n;

      for(int i = 0; i < n; i++){
          cin >> d;
          dias.push_back(d);
      }

      if(dias[0] < dias[n-1]){
          res = dias[0];
      }else{
          res = dias[n-1];
      }

      for(int i = 0; i < n-1; i++){
          if(dias[i] > dias[i+1]){
              if(res > dias[i]){
                  res = dias[i];
              }
          } else {
              if(res > dias[i+1]){
                  res = dias[i+1];
              }
          }
      }

      cout << res << endl;

      return 0;
  }