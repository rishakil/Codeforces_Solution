#include<stdio.h>
int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		char a[9];
		int flag = 0;
		for(int i=0; i<8; i++) {
			int _flag = 0;
			scanf("%s", a);
			for(int j=0; j<8; j++) {
				if(a[j] != 'R') {
					_flag = 1;
					break;
				}
			}
			if(_flag==0) flag = 1;
		}
		printf((flag==1)? "R\n": "B\n");
	}
	return 0;
}