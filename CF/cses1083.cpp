#include<bits/stdc++.h>
using namespace std;
int main() {
	int n; scanf("%d", &n);
	int arr[n+5];
	for(int i = 0; i<n-1; i++) {
		scanf("%d", &arr[i]);
	}
	sort(arr, arr + n-1);
	int ans = n;
	for(int i=0; i<n-1; i++) {
		if(arr[i] != i+1) {
			ans = i+1;
			break;
		}
	}
	printf("%d", ans);
	return 0;
}