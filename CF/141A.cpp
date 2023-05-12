#include<stdio.h>
#include<string.h>
int main() {
	char s[204], s1[101], s2[101];
	static char temp[2];
	scanf("%s", s);
	/*s1[0] = s[0];
	printf("%s\n", s1);
	printf("%c\n", s1[0]);
	printf("%s", s);*/
	scanf("%s", s1);
	scanf("%s", s2);
	if(strlen(s)+strlen(s1) != strlen(s2)) printf("NO");
	else {
		strcat(s,s1);
		for (int i=0; i<strlen(s); i++) {
			for (int j=i+1; j<strlen(s); j++) {
				if(s[i]>s[j]) {
					temp[i] = s[i];
					s[i] = s[j];
					s[j] = temp[i];
				}
			}
		}

		for (int i=0; i<strlen(s2); i++) {
			for (int j=i+1; j<strlen(s2); j++) {
				if(s2[i]>s2[j]) {
					temp[i] = s2[i];
					s2[i] = s2[j];
					s2[j] = temp[i];
				}
			}
		}
		/*printf("%s\n", s);
		printf("%s\n", s2);*/

		//(strcmp(s,s2)==0) ? printf("YES\n") : printf("NO\n");
		printf(strcmp(s,s2)==0 ? "YES" : "NO");
	}
	return 0;
}

/*
	Learnt so many things about string and sorting
	Remarks to myself: Try to write raw code until you feel you are done, Shakil
*/