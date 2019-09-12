#include <bits/stdc++.h>

using namespace std;

int cs[100];

int main() {

    int n, k;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
        cin >> cs[i];

    sort(cs, cs + n);

    k > n ? cout << -1: cout << cs[n - k] << ' ' << cs[n - k];

    return 0;
}