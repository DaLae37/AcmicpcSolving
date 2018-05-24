#include <stdio.h>
#include <vector>
#include <algorithm>
int N, time = 0, totalTime;
std::vector<int> list;
int main(){
	scanf("%d", &N);
	for (int i = 0; i < N; i++){
		int tmp;
		scanf("%d", &tmp);
		list.push_back(tmp);
	}
	std::sort(list.begin(), list.end());
	for (int i : list){
		time += i;
		totalTime += time;
	}
	printf("%d", totalTime);
}