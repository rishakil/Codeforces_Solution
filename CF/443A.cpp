#include<stdio.h>
#include<string.h>
int main() {
	int temp = 0, count = 0, lofset=0, lof_set=0;
	char set[1001];
	gets(set);
	//printf("%d\n", strlen(set));
	for(int i=0; set[i]!='\0';i++) lofset++;
	if (lofset == 2) printf("%d", 0);
	else {
		char _set[lofset/3+1];
		for (int i = 0; i < lofset/3; i++) _set[i] = set[i*3+1];

		for (int i=0; _set[i]>='a' && _set[i]<='z'; i++) lof_set++;

		for (int i = 0; i < lof_set; i++) {
			for (int j = i + 1; j < lof_set; j++) {
				if (_set[i] > _set[j]) {
					temp = _set[i];
					_set[i] = _set[j];
					_set[j] = temp;
				}
			}
		}
		for (int i = 0; i < lof_set; i++) {
			if (_set[i] < _set[i + 1]) count++;
		}
		printf("%d", count + 1);
	}

	return 0;
}

/*

	Remark: Be aware of using scanf() and strlen() while dealing with character.
	Use gets(), or scanf("%^\n") instead of scanf() while taking a line with characters.

*/