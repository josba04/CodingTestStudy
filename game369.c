/*���̵��
1.40���� �� �߿� ��� �������� üũ�ϱ� ���ؼ� ���� ���� �ڸ��� ���� �ڸ��� ������.
2. ���� ���� 3���� ������. 
3. ���� �ڸ����� 3,6,9�� ���´ٸ� count�� �����Ѵ�.
4. ���� �ڸ����� 3,6,9�� ���´ٸ� count�� �����Ѵ�. 
5. count�� ���� ����Ѵ�.
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
	printf("�ڼ�Ƚ�� : %d\n", result);
	return 0;
}