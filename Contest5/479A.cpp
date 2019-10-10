  //Bachgold Problem codeforces
  #include <bits/stdc++.h>

  using namespace std;

  int main(){

      int n, aux;
      cin >> n;

      vector<int> v;
      aux = n/2;

      if(n%2 == 0){
        cout << aux << endl;
        int res = 1;
        for(res; res <= n; res+=2){
          cout << 2 << " ";
        }
      } else if(n%2 != 0){
        cout << aux << endl;
        int res = 0;
        for(res; res<n; res += 2){
          v.push_back(2);
        }
        for(int i=0; i < (v.size()-2); ++i){
          cout << "2" << " ";
        }
        cout << "3" << endl;
      }
  }