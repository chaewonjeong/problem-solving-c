#include <stdio.h>

// 조건 분기문 Ex
int main()
{
    int x, y;
    printf("x : ");
    scanf("%d", &x);
    printf("y : ");
    scanf("%d", &y);

    // 절댓값
    int absolute;
    if (x < 0)
    {
        absolute = -x;
        printf("x absolute value is %d\n", absolute);
    }
    else
        printf("x absolute value is %d\n", x);

    // x 와 y를 크기 순서대로 출력
    if (x > y)
    {
        int t = x;
        x = y;
        y = t;
    }
    printf("%d %d\n", x, y);

    // 최댓값 출력
    int max;
    if (x > y)
        max = x;
    else
        max = y;
    printf("max number is %d\n", max);

    return 0;
}