#include<stdio.h>
int solution(int arr[], int length) {
	int count = 0;
	for (int i = 0; i <= length; i++) {
		if (arr[i] <= 650 || arr[i] > 800)
			count++;
	}
	return count;
}

int main(void) {
	int score[] = { 650,722,914,558,714,803,650,679,669,800 };
	int result;
	result = solution(score, 10);
	printf("수강대상 : %d\n", result);
	return 0;
}