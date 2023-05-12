#include<bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		long long m, s;
		cin >> m >> s;
		long long arr[m + 2];
		for (int i = 0; i < m; i++) {
			cin >> arr[i];
		}
		long long sum2 = 0;
		for (int i = 0; i < m; i++) {
			sum2 += arr[i];
		}
		if (sum2 == s) cout << "NO";
		else {
			sort(arr, arr + m);
			long long arr2[arr[m - 1] + 2];
			long long n = 1;
			for (int i = 0; i < arr[m - 1]; i++) {
				arr2[i] = i + 1;
			}
			for (int i = 0; i < m; i++) {
				arr2[arr[i] - 1] = 0;
			}

			int p = 0;
			long long arr3[arr[m - 1]];
			arr3[0] = 0;
			for (int i = 0; i < arr[m - 1]; i++) {
				if (arr2[i] > 0) {
					arr3[p++] = arr2[i];
				}
			}

			for(int i=0; i<p; i++) {
				cout << arr3[i] << ' ';
			}
			/*if (arr3[0] != 0) {
				long long sum = 0;
				for (int i = 0; i < p; i++) {
					sum += arr3[i];
				}
				if (sum == s) cout << "YES";
				else if (sum > s) cout << "NO";
				else {
					long long q = arr[m - 1];
					for (int i = 0; ; i++) {
						q++;
						sum += q;
						if (sum > s || sum == s) {
							break;
						}
					}
					if (sum == s) cout << "YES";
					else cout << "NO";
				}
			}
			else {
				long long sum = 0;
				long long r = arr[m - 1];
				for (int i = 0; ; i++) {
					r++;
					sum += r;
					if (sum > s || sum == s) {
						break;
					}
				}
				if (sum == s) cout << "YES";
				else cout << "NO";
			}*/
		}


		cout << '\n';
	}
	return 0;
}

/*

2
3 13
3 1 4
5 6
1 2 3 4 5

*/