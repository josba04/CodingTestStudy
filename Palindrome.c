#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
/*���̵��(malloc ���)
1. solution���� �迭�� �����ؼ� ���ο��� ���� �迭�� �ڿ������� �ִ´�.
2. solution���� ���� �迭�� main������ �迭�� ���Ѵ�.
*/

int solution(char* arr) {
	char* str2 = (char*)malloc(sizeof(char) * 101);
	int index = 0;

	for (int i = 0; i < strlen(arr); i++) {
		char str3 = arr[i];
		if (str3 != ' ' && str3 != '.') {
			str2[index] = str3;
			index++;
		}
	}
	for (int i = 0; i < index / 2; i++) {
		if (str2[i] != str2[index - 1 - i]) {
			return false;
		}
	}
	return true;
}
	

	/*int arr;
	bool isPalindrome = true;

	arr = strlen(arr);

	for (int i = 0; i < length / 2; i++) {
		if (arr[i] != arr[length - 1 - i]) {
			isPalindrome = false;
			break;
		}
	}
	return isPalindrome;*/


int main(void) {
	char str[] = "rececar";
	int result;
	result = solution(str);
	if (result == true) {
		printf("�Ӹ���ҹ����Դϴ�.(true)");
	}

	else {
		printf("�÷���ҹ��ڰ� �ƴմϴ�.(false)");
	}
	return 0;
}