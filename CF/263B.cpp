#include<stdio.h>
#include<string.h>
int main() {
	int n,k,temp;
	scanf("%d %d", &n, &k);
	int a[n+4];
	for (int i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}

	if(n<k) printf("%d", -1);
	else if(n==k) printf("%d %d", 1, 1);
	else {
		//sorting the array
		for(int i=0; i<n; i++) {
			for (int j=i+1; j<n; j++) {
				if(a[i]>a[j]) {
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}
		// 2 3 5 7 8 13 -- 2 ; 6-2+1 , 1
		/*for(int i=0; i<n; i++) {
			printf("%d ", a[i]);
		}*/
		printf("%d %d", a[n-k], 1);
	}
	return 0;
}