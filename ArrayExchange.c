/*���̵��
1. �迭 ���� for������ �д´�.
2. �迭 ���� �ٸ� �迭�� �ű�� ?
3. �迭�� �ű� ���� �ڿ������� �ִ´� ?
*/
#include<stdio.h>
int* solution(int arr[], int length) {
	int left = 0;
	int right = length - 1;
	while (left < right) {
		int res = arr[right];
		arr[right] = arr[left];
		arr[left] = res;
		//�� �ȵ�
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
