#include <stdio.h>

int main()
{
    int num1, num2;
    char opr;

    printf("�ǿ����� num1�� �Է��ϼ���: ");
    scanf("%d", &num1);

//    rewind(stdin);

    printf("�����ڸ� �Է��ϼ���(+, -, *, /, %%): ");
    scanf("%c", &opr);

    printf("�ǿ����� num2�� �Է��ϼ���: ");
    scanf("%d", &num2);

    switch (opr)
    {
    case '+':
        printf("%d %c %d = %d", num1, opr, num2, num1 + num2);
        break;
    case '-':
        printf("%d %c %d = %d", num1, opr, num2, num1 - num2);
        break;
    case '*':
        printf("%d %c %d = %d", num1, opr, num2, num1 * num2);
        break;
    case '/':
        printf("%d %c %d = %f", num1, opr, num2, (float)num1 / num2);
        break;
    default:
        puts("������ �߸� �Է��߽��ϴ�!");
        break;
    }

    return 0;
}
