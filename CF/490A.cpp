#include<stdio.h>
void _DarkHorse_001();
void _DarkHorse_002();

int main() {
	_DarkHorse_001();
	//_DarkHorse_002();
	return 0;
}


void _DarkHorse_001() {
	int n;
	scanf("%d", &n);
	int arr[n + 5];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	int _index[n + 5], m = 0, count = 0;
	for (int l = 1; l <= n / 3; l++) {
		for (int i = 1; i < 4; i++) {
			int flag = 0;
			for (int j = 0; j < n; j++) {
				if (arr[j] == i) {
					flag = 1;
					arr[j] = 0;
					_index[m++] = j + 1;
					break;
				}
			}
			if (flag == 0) break;
		}
		if (m>0 && m % (3 * l) == 0) count++;
	}
	printf("%d\n", count);
	int p = 0;
	for (int i = 0; p < count; i = i + 3) {
		printf("%d %d %d\n", _index[i], _index[i + 1], _index[i + 2]);
		p++;
	}
}


void _DarkHorse_002() {
	int n;
	scanf("%d", &n);
	int arr[n + 5];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	int _index[n + 5], m = 0, count = 0;;
	for (int l = 0; l < n / 3; l++) {
		for (int i = 0; i < n; i++) {
			if (arr[i] == 1) {
				arr[i] = 0;
				_index[m++] = i + 1;
				for (int j = 0; j < n; j++) {
					if (arr[j] == 2) {
						arr[j] = 0;
						_index[m++] = j + 1;
						for (int k = 0; k < n; k++) {
							if (arr[k] == 3) {
								arr[k] = 0;
								_index[m++] = k + 1;
								count++;
								break;
							}
						}
						break;
					}
				}
				break;
			}
		}
	}
	printf("%d\n", count);
	int p = 0;
	for (int i = 0; p < count; i = i + 3) {
		printf("%d %d %d\n", _index[i], _index[i + 1], _index[i + 2]);
		p++;
	}
}