#include <stdio.h>

// 입력으로 양의 정수 N을 받아서 2진수로 변환하여 출력하는 프로그램을 작성하라

int main()
{

    int n;
    int v = 2;
    int tmp;

    scanf("%d", &n);

    while (v * 2 <= n)
    {
        v *= 2;
    }

    tmp = v;

    for (int i = 1; i <= v; i *= 2)
    {
        if (n >= tmp)
        {
            printf("1");
            n -= tmp;
        }
        else
        {
            printf("0");
        }

        tmp /= 2;
    }
}