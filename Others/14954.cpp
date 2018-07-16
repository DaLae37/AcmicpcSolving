#include <stdio.h>
int n, list[1000001],e;
bool canStop;
bool isLoop(int tmp){
	for (int i = 0; i < e-1; i++){
		if (list[i] == tmp)
			return false;
	}
	return true;
}
int main(){
	scanf("%d", &n);
	int result = 0;
	do{
		result = 0;
		while (n){
			int tmp = n % 10;
			n /= 10;
			result += tmp * tmp;
		}
		if (result == 1)
			canStop = true;
		n = list[e++] = result;
	} while (isLoop(result));
	if (canStop)
		puts("HAPPY");
	else
		puts("UNHAPPY");
	return 0;
}