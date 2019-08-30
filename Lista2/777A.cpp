#include <bits/stdc++.h>

using namespace std;

int main(){

	int ball, n = 3;
	int a, b;
	
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	
	scanf("%d", &ball);
	while (n--)
	{
		scanf("%d%d", &a, &b);
		if (a == ball)
			ball = b;
		else if (b == ball)
			ball = a;
	}
	printf("%d", ball);
	return 0;
}