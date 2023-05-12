#include<stdio.h>
int main() {
	int arr[6];
	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}
	int flag = 0;
	for (int i = 0; i < 4; i++) {
		if (arr[i] == 1) {
			flag = 1;
			break;
		}
	}
	if (flag == 1) {
		printf("%d\n", arr[4]);
	}
	else {
		int _arr[arr[4] + 4];
		for (int i = 0; i < arr[4]; i++) {
			_arr[i] = 0;
		}
		for(int i=0; i<4; i++) {
			for(int j=1; j<=arr[4]/arr[i]; j++) {
				_arr[arr[i]*j-1] = 1;
			}
		}
		int count =0;
		for(int i=0; i<arr[4]; i++) {
			if(_arr[i]==1) count++;
		}
		printf("%d\n", count);
	}
	return 0;
}