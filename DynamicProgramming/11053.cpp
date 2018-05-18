#include <stdio.h>
int list[1001], b[1001];
int main() {
	int a, max;
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
		scanf("%d", &list[i]);
	b[0] = 1;
	max = 1;
	for (int i = 1; i < a; i++) {
		b[i] = 1;
		for (int j = 0; j < i; j++) {
			if (list[i] > list[j] && b[i] < b[j] + 1)
				b[i]++;
		}
		max = (max < b[i]) ? b[i] : max;
	}
	printf("%d", max);
	return 0;
}