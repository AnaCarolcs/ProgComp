#include <bits/stdc++.h>

using namespace std;

int solve(const vector<int>& as, const vector<int>& bs){

  priority_queue<int> A(as.begin(), as.end()), B(bs.begin(), bs.end());
  int wins = 0;

  while(not A.empty() and not B.empty()){
    if(A.top() > B.top()){
      ++wins;
      A.pop();
      B.pop();
    } else {
      B.pop();
    }
  }
  return wins;
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