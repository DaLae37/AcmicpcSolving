#include <stdio.h>
int T, k, n, apart[15][15];
int main(){
	for (int i = 0; i < 15; i++){
			for (int j = 1; j < 15; j++){
				if (i == 0)
					apart[i][j] = j;
				else
					apart[i][j] = apart[i][j - 1] + apart[i - 1][j];
		}
	}
	scanf("%d", &T);
	for (int i = 0; i < T; i++){
		scanf("%d %d", &k, &n);
		printf("%d\n", apart[k][n]);
	}
	return 0;
}