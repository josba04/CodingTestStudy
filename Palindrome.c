#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
/*아이디어(malloc 사용)
1. solution에서 배열을 생성해서 메인에서 받은 배열을 뒤에서부터 넣는다.
2. solution에서 받은 배열과 main에서의 배열을 비교한다.
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
		printf("팰린드롬문자입니다.(true)");
	}

	else {
		printf("플랜드롬문자가 아닙니다.(false)");
	}
	return 0;
}