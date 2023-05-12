#include <bits/stdc++.h>
using namespace std;

int value(int n) {
    return (((n + 1) / 2) * n) - 1;
}
int main()
{
    int n;
    cin >> n;
    char s[100];
    cin >> s;
    int t = 1;
    for (int i = 0; i < n; i++) {
        if (i == value(t)) {
            cout << s[i];
            t++;
        }
    }
    return 0;
}

