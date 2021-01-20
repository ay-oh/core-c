/**
 * 1152 : 10보다 작은 수 (else 버전)
 * 
 * 문제 설명
 * 10보다 작은 정수가 입력되면 small 을 출력, 그 이상의 수가 입력되면 big 을 출력하시오.
 * 
 * 입력
 * 정수가 입력된다.
 * 
 * 출력
 * 10미만 : small
 * 10이상 : big
 * 을 출력한다.
 * 
 * 입력 예시
 * 15
 * 
 * 출력 예시
 * big
 */
#include <stdio.h>

int main()
{
    int d;
    scanf("%d", &d);
    if (d < 10)
        puts("small");
    else {
        puts("big");
    }
    return 0;
}
