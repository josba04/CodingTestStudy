#include<stdio.h>

int solution(int number[], int length){
	int count = 0;
	int sum = 0;
	
	
	for (int i = 0; i < length; i++) {
		sum += number[i];
	}
	double avg = (double)sum / length;
	for (int j = 0; j < length; j++) {
		if (avg > number[j]) {
			count++;
		}
	}
		return count;
}
int main() {
	int data1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int data_len1 = 10;
	int ret1 = solution(data1, data_len1);

	printf("solution 함수의 변환 값은 %d 입니다. \n", ret1);

	int data2[10] = { 1,1,1,1,1,1,1,1,1,10 };
	int data_len2 = 10;
	int ret2 = solution(data2, data_len2);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
}