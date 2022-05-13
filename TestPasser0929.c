#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//합격한 종목이 하나 이하이거나, 통과점수의 반을 넘기지 못한 종목이 있다면 불합격

int func_a(int passed, int non_passed) {  //통과 종목 확인
    return (passed > 1 && non_passed == 0);
}

int func_b(int scores[3]) { //통과점수의 반을 넘는지 확인(과목수)
    int answer = 0;
    if (scores[0] < 40) {
        answer++;
    }
    if (scores[1] < 44) {
        answer++;
    }
    if (scores[2] < 35) {
        answer++;
    }
    return answer;
}

int func_c(int scores[3]) { //통과한 과목이 한개 이상이 되는지 확인 (과목수)
    int answer = 0;
    if (scores[0] >= 80) {
        answer++;
    }
    if (scores[1] >= 88) {
        answer++;
    }
    if (scores[2] >= 70) {
        answer++;
    }
    return answer;

    

   
}
int solution(int scores[][3], int scores_len) {
    int answer = 0;
    for (int i = 0; i < scores_len; i++) {
        int passed = func_c(scores[i]);
        int non_passed = func_b(scores[i]);
        answer += func_a(passed, non_passed);
    }
    return answer;
 }







int main() {
    int scores1[2][3] = {
        {30, 40, 100},
        {97, 88, 95}
    };
    int ret1 = solution(scores1, 2);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

    int scores2[6][3] = {
        {90, 88, 70},
        {85, 90, 90},
        {100, 100, 70},
        {30, 90, 80},
        {40, 10, 20},
        {83, 88, 80}
    };
    int ret2 = solution(scores2, 6);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
}