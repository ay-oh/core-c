#include <stdio.h>

/**
 * 문자열 관련 함수를 사용하기 위해서는 표준 헤더 파일 string.h를 추가해야 함
 */
#include <string.h>

int main()
{
    char word[46];
    scanf("%s", word);

    /**
     * strcmp: 두 문자열이 같다면 0을 반환하고 다르면 0이 아닌 값을 반환(인자 값의 위치는 상관 없음)
     * @see https://docs.microsoft.com/ko-kr/cpp/c-runtime-library/reference/strcmp-wcscmp-mbscmp?view=msvc-160
     * @see https://www.programiz.com/c-programming/library-function/string.h/strcmp
     */
    if (!strcmp("love", word)) {
        puts("I love you.");
    }
    return 0;
}
