#include <stdio.h>
int n, str[302], d[302][2], max;

int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		scanf("%d", &str[i]);
	d[1][0] = str[1];
	d[1][1] = 0;
	for (int i = 2; i <= n; i++) {
		d[i][0] = d[i - 2][0] > d[i - 2][1] ? d[i - 2][0] : d[i - 2][1];
		d[i][0] += str[i];
		d[i][1] = d[i - 1][0] + str[i];
	}
	max = (d[n][0] > d[n][1]) ? d[n][0] : d[n][1];
	printf("%d", max);
	return 0;
}