#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(char* schedule[], int schedule_len) {
	int x_count = 0;
	
	for (int i = 0; i < schedule_len; i++) {
		if (schedule[i] == "X") 
			x_count++;
	}
	int* answer = (int*)malloc(x_count * sizeof(int));
	int j = 0;
	for (int i = 0; i < schedule_len; i++) {
		if (schedule[i] == "X") {
			answer[j] = i + 1;
			j++;
		}
	}

	return answer;
}

int main() {
	char* schedule[] = { "O","X","X","O","O","O","X","O","X","X" };
	int* ret = solution(schedule, 10);

	printf("solution 함수의 반환 값은 ");
	for (int i = 0; i < 5; i++)
		printf("%d  ", ret[i]);
	printf("입니다.");
}