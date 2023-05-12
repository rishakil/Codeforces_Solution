#include <bits/stdc++.h>
using namespace std;
int main() {
	int a;
	int c=0;
	string b;
	scanf("%d",&a);
	while(a--) {
		cin >> b;
		if (b == "X++") c++;
		else if (b == "++X") ++c;
		else if (b == "--X") --c;
		else if (b == "X--") c--;
	}
	printf("%d", c);
	return 0;
}