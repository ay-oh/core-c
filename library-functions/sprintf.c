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

    // ��Ÿ�� ����(���ڿ� ��� �Լ��� ���� ������ �������� ��)
    // puts(sp1.player_number);

    /**
     * sprintf: �������� string���� ��ȯ�ϰ� ���� �� ù ��° ���ڿ� ����ϴ� �Լ�
     *  e.g. 7 -> "7"
     */
    sprintf(temp, "%d", sp1.player_number);
    printf("player_number(not int but char []): %s\n", temp);

    return 0;
}
