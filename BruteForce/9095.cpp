#include <stdio.h>
int tmp; //N
int checkNum(int n,int sum){
	if (sum == tmp) //break loop if sum is meeting what we finding
		return 1;
	if (sum > tmp) //if over the sum, there are no reason to find more
		return 0;
	return checkNum(1, sum +1) + checkNum(2, sum +2) + checkNum(3, sum +3); //check all case if plus 1 or 2 or 3
}
int main(){
	int n; //the number of test case T
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		scanf("%d", &tmp);
		printf("%d\n", checkNum(0, 0)); //start checkNum function from 0
	}
	return 0;
}