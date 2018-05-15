#include <stdio.h>
int n, s,num[21],count;

void search(int sum, int a, bool addBefore){
	if (sum == s && addBefore){ //because of counting repeat, only count if status is adding before
		count++;
	}
	if (a < n-1){
		search(sum + num[a + 1], a + 1, true); //plus next
		search(sum, a + 1, false); //not plus next
	}
}
int main(){
	scanf("%d %d", &n, &s);
	for (int i = 0; i < n; i++){
		scanf("%d", &num[i]);
	}
	for (int i = 0; i < n; i++){
		search(num[i], i, true);
	}
	printf("%d", count);
	return 0; 
}