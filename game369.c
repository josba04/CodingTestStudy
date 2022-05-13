/*아이디어
1.40까지 수 중에 몇번 나오는지 체크하기 위해서 수를 십의 자리와 일의 자리로 나눈다.
2. 나눈 수를 3으로 나눈다. 
3. 일의 자리에서 3,6,9가 나온다면 count를 증가한다.
4. 십의 자리에서 3,6,9가 나온다면 count를 증가한다. 
5. count의 값을 출력한다.
*/
#include <stdio.h>
int solution(int number) {
	
	int count = 0;
	for (int i = 0; i < number; i++) {
	int one = i % 10;
	int ten = i % 100 / 10;
	if (one % 3 == 0 && one != 0)
		count++;
	if (ten % 3 == 0&& ten != 0)
			count++;
	}
	return count;
}


int main(void) {
	int result;
	result = solution(40);
	printf("박수횟수 : %d\n", result);
	return 0;
}