#include<bits/stdc++.h>
using namespace std;
#define gap ' '
void _DarkHorse_(long long n, long long m, long long num);

int main() {
	long long n, m, num; cin >> n >> m >> num;
	_DarkHorse_(n, m, num);
	return 0;
}

void _DarkHorse_(long long n, long long m, long long num) {
	long long a = 0, b = 1, temp = 0;
	if (n == 1) cout << a << gap;
	else if (n == 2) cout << a << gap << b << gap;
	else {
		cout << a << gap << b << gap;
		for (int i = 0; i < n - 2; i++) {
			cout << a + b << gap;
			temp = a + b;
			a = b;
			b = temp;
		}
		cout << '\n';
	}
	a = 0, b = 1;
	if (m == 1) cout << a << gap;
	else if (m == 2) cout << b << gap;
	else {
		int i = 1, flag = 0;
		while (true) {
			if (m == 2 + i) {
				cout << "The " << m << "th term is: " << a + b << '\n';
				flag++;
			}
			if (a + b == num) {
				cout << "This is in " << i + 2 << "th term." << '\n';
				flag++;
			}
			if (flag == 2) break;
			temp = a + b;
			a = b;
			b = temp;
			i++;
		}
	}
}