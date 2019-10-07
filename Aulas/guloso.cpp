#include <bits/stdc++.h>

using namespace std;

int solve(const vector<int>& as, const vector<int>& bs){

  priority_queue A(as.begin, as.end), B(bs.begin, bs.end);
  int wins;

  while(not as.empty and not bs.empty){
    if(as.top() > bs.top()){
      ++wins;
      as.pop();
      bs.pop();
    } else {
      bs.pop();
    }
  }
}

int main(){

  int n;

  cin >> n;

  vector<int> as(n), bs(n);

  for(int i = 0; i < n; i++){
    cin >> as[i];
  }

  for(int i = 0; i < n; i++){
    cin >> bs[i];
  }

  cout << solve(as, bs) << endl;

  return 0;
}