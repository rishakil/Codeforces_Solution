#include<stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    //cin >> t;
    while (t--) {
        int n;
        scanf("%d", &n);
            int _n[n+1];
            for (int i = 0; i < n; i++) {
                scanf("%d", &_n[i]);
            }
            int maxsub=0, a=0, max=_n[0], min=_n[0];
            for(int i=0; i<n-1; i++) {
                if(_n[i+1]>max) max = _n[i+1];
                if (_n[i+1]<min) min = _n[i+1];
                a=_n[i]-_n[i+1];
                if(a>maxsub) {
                    maxsub=a;
                }
            }
            if(_n[n-1]-_n[0]>maxsub) maxsub = _n[n-1]-_n[0];
            int b = _n[n-1]-min;
            int c = max-_n[0];
            int ans;
            if(maxsub>=b && maxsub>=c) ans = maxsub;
            else if(b>=maxsub && b>=c) ans = b;
            else ans = c;
            printf("%d\n", ans);
    }
    return 0;
}

/*
5
6
1 3 9 11 5 7
1
20
3
9 99 999
4
2 1 8 1
3
2 1 5
*/