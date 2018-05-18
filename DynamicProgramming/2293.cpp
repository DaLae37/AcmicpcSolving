#include <stdio.h>
int n, k, x, dp[10001] = { 1 };
int main(){
	scanf("%d %d", &n, &k);
	for (int i = 0; i < n; i++){
		scanf("%d", &x);
		for (int j = 0; j <= k - x; j++){
			dp[j + x] += dp[j];
		}
	}
	printf("%d", dp[k]);
	return 0;
}