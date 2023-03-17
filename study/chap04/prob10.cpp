#include <stdio.h>

/*2차원 평면의 1사분면에서 원점으로부터 거리가 100 이하인 정수 좌표점의 개수는? x,y 좌표가 0인 경우도 포함*/

int main()
{
    int count = 0;

    for (int x = 0; x <= 100; x++)
    {
        for (int y = 0; y <= 100; y++)
        {
            if (x * x + y * y <= 10000)
            {
                count++;
            }
        }
    }

    printf("%d\n", count);
}