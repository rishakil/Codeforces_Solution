#include<stdio.h>
int v[102][102];
int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	int i, j;
	int k, x;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++)
			v[i][j] = 0;
			//scanf("%d", &v[i][j]);
	}

	/*for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			printf("%d ", v[i][j]);
		}
		printf("\n");
	}*/
	for (i = 0; i < m; i++)
	{
		scanf("%d", &k);
		for (j = 0; j < k; j++)
		{
			scanf("%d", &x);
			v[x - 1][i] = 1;
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			x = 0;
			for (k = 0; k < m; k++)
				if (v[i][k] > 0 && v[j][k] > 0)
					x++;
			if (x == 0)
			{
				printf("No\n");
				return 0;
			}
		}
	}
	printf("Yes\n");
	return 0;
}


/*

3 3
2 1 2
2 2 3
2 1 3


4 2
3 1 2 4
3 2 3 4


*/