#include<stdio.h>
int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int n;
		scanf("%d", &n);
		int arr[n+5];
		char str[n+1];
		for(int i=0; i<n; i++) {
			scanf("%d", &arr[i]);
		}
		scanf("%s", str);
		int flag = 0;
		for(int i=0; i<n-1; i++) {
			for(int j=i+1; j<n; j++) {
				if(arr[i]==arr[j]) {
					if(str[i] != str[j]) {
						flag = 1;
						break;
					}
				}
			}
			if(flag == 1) {
				break;
			}
		}
		if(flag==1) {
			printf("NO\n");
		}
		else printf("YES\n");

	}
	return 0;
}