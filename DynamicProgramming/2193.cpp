#include <stdio.h>
/*
1
if N is 1, total : 1
10
if N is 2, total : 1
100
101
if N is 3, total : 2
1000
1001
1010
if N is 4, total : 3
10000
10001
10010
10100
10101
if N is 5, total : 5
100000
100001
100010
100100
100101
101000
101001
101010
if N is 6, total : 8
so, this is fibonacci number
*/
long long N, fibo[100] = { 1, 1, }; //if used  int data type, It will happen overflow
int main(){
	scanf("%d", &N);
	for (int i = 2; i < N; i++){
		fibo[i] = (fibo[i - 1] + fibo[i - 2]);
	}
	printf("%lld", fibo[N - 1]);
	return 0;
}