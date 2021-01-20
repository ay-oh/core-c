/**
 * 1151 : 10보다 작은 수
 * 
 * 문제 설명
 * 10보다 작은 수가 입력되면 small 을 출력, 10이상이면 아무것도 출력하지 마시오.
 * 
 * 입력
 * 자연수가 입력된다.
 * 
 * 출력
 * 10미만이면 small을 출력한다.
 * 
 * 입력 예시
 * 5
 * 
 * 출력 예시
 * small
 */
#include <stdio.h>

int main()
{
    unsigned int n;
    scanf("%u", &n);
    if (n < 10)
        puts("small");
    return 0;
}
