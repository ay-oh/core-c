/**
 * 테스트 케이스:
 * 8 10 -10
 * -9 -8 -4
 */
#include <stdio.h>

/**
 * @see https://www.cplusplus.com/reference/cmath/sqrt/
 * x의 제곱근을 구해주는 sqrt() 함수를 사용하기 위해 include
 */
#include <math.h>

/**
 * quadratic_formula(이차 방정식의 해 구하는 함수 정의)
 * 
 * @var real_part       - 실수부
 * @var imaginary_part  - 허수부
 * @var discriminant    - 판별식 D라고 줄여서 부름
 */
void quadratic_formula(float a, float b, float c)
{
    float real_part = 0.0;

    if (b == 0 && c == 0) {
        printf("%.2f\n", real_part);
        return;
    } else {
        // 판별식 d
        float discriminant = b * b - 4 * a * c;
        real_part = -(b / a / 2);

        if (discriminant > 0)
        {
            // 2개의 실근을 가질 때
            printf("%.2f\n", (real_part) + (sqrt(discriminant) / (2 * a)));
            printf("%.2f\n", (real_part) - (sqrt(discriminant) / (2 * a)));
        } else if (discriminant < 0) {
            float imaginary_part = sqrt(-discriminant) / (2 * a);
            imaginary_part = (imaginary_part < 0) ? (-imaginary_part) : (imaginary_part);

            // 2개의 허근을 가질 때
            printf("%.2lf+%.2lfi\n", real_part, imaginary_part);
            printf("%.2lf-%.2lfi\n", real_part, imaginary_part);
        } else {
            // 중근일 때
            printf("%.2f\n", real_part);
        }
    }
}

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    quadratic_formula((float)a, (float)b, (float)c);
    return 0;
}
