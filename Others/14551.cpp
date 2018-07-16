#include <stdio.h>
int N, M, result = 1;
int main(){
	scanf("%d %d", &N, &M);
	for (int i = 0; i < N; i++){
		int tmp;
		scanf("%d", &tmp);
		if (tmp != 0)
			result = (result * tmp) % M;			
	}
	printf("%d", result % M);
	return 0;
}