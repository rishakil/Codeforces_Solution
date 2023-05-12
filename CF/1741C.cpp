#include<stdio.h>
int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int n;
		scanf("%d", &n);
		int arr[n+5];
		for(int i=0; i<n; i++) {
			scanf("%d", &arr[i]);
		}
		int max=arr[0], sum = arr[0];
		for(int i=1; i<n; i++) {
			if(arr[i]>max) {
				max = arr[i];
			}
			sum = sum+arr[i];
		}
		//printf("%d %d\n", max, sum);
		if(sum%max==0) {
			int _sum = 0, _max=0, count = 0;
			for(int i=0; i<n; i++) {
				_sum = _sum+arr[i];
				if(_sum==max) {
					if(count+1>_max) {
						_max = count+1;
					}
					count = 0;
					_sum = 0;
				}
				else {
					count++;
				}
			}
			printf("%d\n", _max);
		}
		/*else {

		}*/

	}
	return 0;
}

/*

5
6
55 45 30 30 40 100
4
10 23 7 13
5
10 55 35 30 65
6
4 1 1 1 1 4
5
10 13 7 23 7
*/