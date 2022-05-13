#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
(strlen, malloc 사용)
1. solution을 만든다.
2. 문자 배열을 비교한다.
3. 새로운 문자 배열을 만든다.
ex) 배열 0번방에 글자와 1번방의 글자가 서로 같은지 다른지 비교
같으면 제외, 다르면 배열에 저장
3. 저장된 배열을 return 한다.
*/
char* solution(char* characters) {
	char* result = malloc(sizeof(char)*strlen(characters));
	int result_len = 0;
	result[0] = characters[0];
	result_len++;
	for (int i = 1; i < strlen(characters); i++) {
		if (characters[i - 1] != characters[i]) {
			result[result_len] = characters[i];
			result_len++;
		}
	}
		result[result_len] = NULL;
		return result;
}



int main() {
	char* characters = "senteeeencccccceeee";
	char* ret = solution(characters);
	printf("solution 함수의 반환 값은 %s 입니다.\n", ret);
}