#include <stdio.h>
int N;
long long result;
struct Point{
	long long parentCount = 0;
	bool hasParent = false;
	bool isLeaf = true;
};
Point p[500002];
int main(){
	scanf("%d", &N);
	p[1].hasParent = true;
	for (int i = 0; i < N-1; i++){
		int tmp1, tmp2;
		scanf("%d %d", &tmp1, &tmp2);
		if (p[tmp1].hasParent){
			p[tmp2].parentCount = p[tmp1].parentCount + 1;
			p[tmp2].hasParent = true;
			p[tmp1].isLeaf = false;
		}
		else if (p[tmp2].hasParent){
			p[tmp1].parentCount = p[tmp2].parentCount + 1;
			p[tmp1].hasParent = true;
			p[tmp2].isLeaf = false;
		}
	}
	for (int i = 1; i <= N; i++){
		if (p[i].isLeaf){
			printf("%d - %d\n", i, p[i].parentCount);
			result += p[i].parentCount;
		}
	}
	printf("%d", result);
	if (result % 2 == 1)
		puts("Yes");
	else
		puts("No");
	return 0;
}