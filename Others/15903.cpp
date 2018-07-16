#include <stdio.h>
#include <algorithm>
using namespace std;
int n, m;
long card[1000001];
int main(){
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++){
		scanf("%ld", &card[i]);
	}
	while (m--){
		sort(card, card + n);
		long tmp = card[0] + card[1];
		card[0] = card[1] = tmp;
	}
	long result = 0;
	for (int i = 0; i < n; i++){
		result += card[i];
	}
	printf("%ld", result);
	return 0;
}