#include <stdio.h>
#include <algorithm>
int num[10], indexes[10];
int main(){
	int tmps[7];
	for (int i = 0; i < 9; i++){
		scanf("%d", &num[i]);
	}
	for (int i = 0; i < (1 << 9); i++){ //using bitmask
		int sum = 0;
		int count = 0;
		for (int j = 0; j < 9; j++){
			if ((1 << j) & i){
				indexes[count++] = j;
				sum += num[j];
			}
		}
		if (count == 7 && sum == 100){ //if sum is 100 and count is 7, breaking loop and copy data with temporary array
			for (int i = 0; i < 7; i++){
				tmps[i] = num[indexes[i]];
			}
			break;
		}
	}
	std::sort(tmps, tmps + 7);
	for (int i = 0; i < 7; i++){
		printf("%d\n", tmps[i]);
	}
	return 0;
}