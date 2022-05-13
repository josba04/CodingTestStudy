#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int height[][4], int height_len) {
	int count = 0;
	int arr[6][6] /*= { {50,50,50,50,50},{50,3, 6, 2, 8,50},{50,7, 3, 4, 2,50},{50,8, 6, 7, 3,50},{50,5, 3, 2, 9,50},{50,50,50,50,50} }*/;
	int arr_len = 6;
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			arr[i][j] = 50;
		}
	}
	for (int i = 1; i < 5; i++) {
		for (int j = 1; j < 5; j++) {
			arr[i][j] = height[i - 1][j - 1];
		}
	}

	for (int i = 1; i < 5; i++) {
		for (int j = 1; j < 5; j++) {
			if (arr[i][j] < arr[i][j - 1] && arr[i][j] < arr[i][j + 1] && arr[i][j] < arr[i - 1][j] && arr[i][j] < arr[i + 1][j]) {
				count++;
			}
		}
	}
	return count;
}
int main() {
	int height[4][4] = { {3, 6, 2, 8}, {7, 3, 4, 2}, {8, 6, 7, 3}, {5, 3, 2, 9} };
	int height_len = 4;
	int ret = solution(height, height_len = 4);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}