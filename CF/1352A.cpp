#include<stdio.h>
#include<math.h>
int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int n;
		scanf("%d", &n);
		int m=n;
		int r=n;
		int count=0, _count=0;
		while(r>0) {
			int s=r%10;
			r=r/10;
			if(s!=0) _count++;
		}
		printf("%d\n", _count);
		while(m>0) {
			int p=m%10;
			m=m/10;
			count++;
			if(p!=0) _count++;
			if(p!=0) {
				int q=p*pow(10,count-1);
				printf("%d ", q);
			}
			else continue;
		}
		printf("\n");
	}
	return 0;
}