#include <stdio.h>
int N, first[10001],second[10001], sum;
int main(){
	scanf("%d", &N);
	for (int i = 0; i < N; i++){
		scanf("%d", &first[i]);
		sum += (first[i] < 0) ? -first[i] : first[i];
	}
	for (int i = 0; i < N; i++){
		scanf("%d", &second[i]);
		sum += (second[i] < 0) ? -second[i] : second[i];
	}
	printf("%d", sum);
	return 0;
}