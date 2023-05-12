#include<stdio.h>
#include<string.h>
int main() {
	int t, temp =0;
	scanf("%d", &t);
	while(t--) {
		int count=0;
		char a[3], b[3], c[5];
		scanf("%s", &a);
		scanf("%s", &b);
		c[0] = a[0];
		c[1] = a[1];
		c[2] = b[0];
		c[3] = b[1];
		for(int i=0; i<4; i++) {
			for (int j=i+1; j<4; j++) {
				if (c[i]>c[j]) {
					temp = c[i];
					c[i] = c[j];
					c[j] = temp;
				}
			}
		}
		for(int i=0; i<4; i++) {
			if(c[i+1]>c[i]) count++;
		}
		printf("%d\n", count);
	}
	return 0;
}