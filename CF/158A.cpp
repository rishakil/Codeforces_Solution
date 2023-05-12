#include<bits/stdc++.h>
using namespace std;
int main() {
  int n, i, j, COUNT = 0;
  scanf("%d %d", &n, &i);
  int s[n];
  for (j = 0; j < n; j++) scanf("%d", &s[j]);
  for (j = 0; j < n; j++) if (s[j] >= s[i - 1] && s[j] > 0) COUNT++;
  cout << COUNT << endl;
  return 0;
}
