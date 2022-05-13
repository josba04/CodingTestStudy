#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int solution(int calorie[], int calorie_len) {
	int min = calorie[0];
	int answer = 0;
	for (int i = 1; i < calorie_len; i++) {
		if (calorie[i] < min)
			min = calorie[i];
		if (calorie[i] > min)
			answer += calorie[i] - min;
	}

	return answer;
}
int main() {
	int calorie[] = { 713,665,873,500,751 };
	int ret = solution(calorie, 5);
	printf("solution �Լ��� ��ȯ ���� %d �Դϴ� \n", ret);

}