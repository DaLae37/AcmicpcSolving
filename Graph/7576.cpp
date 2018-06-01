#include <stdio.h>
#include <utility>
using namespace std;
int N, M, box[1001][1001], e, s, count[1001][1001],max;
bool isVisit[1001][1001], isFinish;
pair<int, int> stack[1000001];
void BFS(){
	do{
		int x = stack[s].first, y = stack[s].second;
		printf("%d %d\n", x, y);
		if (x + 1 < M && box[x + 1][y] == 0 && !isVisit[x + 1][y]){
			stack[e].first = x + 1;
			stack[e++].second = y;
			count[x + 1][y] = count[x][y]+1;
			isVisit[x + 1][y] = true;
		}
		if (x - 1 >= 0 && box[x - 1][y] == 0 && !isVisit[x - 1][y]){
			stack[e].first = x - 1;
			stack[e++].second = y;
			count[x - 1][y] = count[x][y]+1;
			isVisit[x - 1][y] = true;
		}
		if (y + 1 < N && box[x][y + 1] == 0 && !isVisit[x][y + 1]){
			stack[e].first = x;
			stack[e++].second = y + 1;
			count[x][y + 1] = count[x][y]+1;
			isVisit[x][y + 1] = true;
		}
		if (y - 1 >= 0 && box[x][y - 1] == 0 && !isVisit[x][y - 1]){
			stack[e].first = x;
			stack[e++].second = y - 1;
			count[x][y - 1] = count[x][y]+1;
			isVisit[x][y - 1] = true;
		}
	} while (++s < e);
	isFinish = true;
	for (int i = 0; i < N; i++){
		for (int j = 0; j < M; j++){
			if (!isVisit[i][j]){
				isFinish = false;
				return;
			}
			max = (max > count[i][j]) ? max : count[i][j];
		}		
	}
}
int main(){
	scanf("%d %d", &M, &N);
	bool isStart = false;
	for (int i = 0; i < N; i++){
		for (int j = 0; j < M; j++){
			scanf("%d", &box[i][j]);
			if (box[i][j] !=0){
				if (box[i][j] == 1){
					stack[e].first = i;
					stack[e++].second = j;
					isStart = true;
				}
				isVisit[i][j] = true;
			}
		}
	}
	if (isStart)
		BFS();
	if (isFinish && isStart){
		printf("%d", max);
	}
	else{
		printf("-1");
	}
	return 0;
}