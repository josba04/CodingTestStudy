#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
(strlen, malloc ���)
1. solution�� �����.
2. ���� �迭�� ���Ѵ�.
3. ���ο� ���� �迭�� �����.
ex) �迭 0���濡 ���ڿ� 1������ ���ڰ� ���� ������ �ٸ��� ��
������ ����, �ٸ��� �迭�� ����
3. ����� �迭�� return �Ѵ�.
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
	printf("solution �Լ��� ��ȯ ���� %s �Դϴ�.\n", ret);
}