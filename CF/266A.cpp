#include<bits/stdc++.h>
using namespace std;
int main() {
	int a, count=0;
	char _str[54];
	scanf("%d", &a);
	scanf("%s", _str);
	for(int i=0; i<a-1; i++) {
		if (_str[i] == _str[i+1]) count++;
	}
	printf("%d", count);
	return 0;
}