#include <stdio.h>

typedef struct _ {
    char name[20];
    int player_number;
} SpursPlayer;

int main()
{
    SpursPlayer sp1 = { "sonheongmin", 7 };
    char temp[10];

    printf("%s, %d\n", sp1.name, sp1.player_number);

    // 런타임 에러(문자열 출력 함수의 인자 값으로 정수형이 들어감)
    // puts(sp1.player_number);

    /**
     * sprintf: 정수형을 string으로 변환하고 싶을 때 첫 번째 인자에 사용하는 함수
     *  e.g. 7 -> "7"
     */
    sprintf(temp, "%d", sp1.player_number);
    printf("player_number(not int but char []): %s\n", temp);

    return 0;
}
