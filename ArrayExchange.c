/*아이디어
1. 배열 값을 for문으로 읽는다.
2. 배열 값을 다른 배열로 옮긴다 ?
3. 배열에 옮긴 값을 뒤에서부터 넣는다 ?
*/
#include<stdio.h>
int* solution(int arr[], int length) {
	int left = 0;
	int right = length - 1;
	while (left < right) {
		int res = arr[right];
		arr[right] = arr[left];
		arr[left] = res;
		//왜 안돼
		left++;
		right--;
	}
	return arr;
}





int main(void) {
	int a[5] = { 1,2,3,4,5 };
	int* result;
	result = solution(a, 5);
	for (int i = 0; i < 5; i++) {
		printf("%d\n", result[i]);
	}
	return 0;
}
