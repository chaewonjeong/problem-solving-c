#include <stdio.h>

/*입력으로 하나의 양의 정수 N을 받은 후 N보다 작거나 같으면서
가장 큰 2의 거듭제곱수를 출력하는 프로그램을 작성하라. 예를 들어 N = 23이면 16을 출력한다.*/

int main()
{
    int N;
    int powerNum = 2;
    scanf("%d", &N);

    while (powerNum * 2 <= N)
    {
        powerNum *= 2;
    }

    // powerNum /= 2;

    printf("%d\n", powerNum);

    return 0;
}