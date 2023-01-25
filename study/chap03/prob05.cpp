#include <stdio.h>

/*입력으로 하나의 양의 정수 N을 받은 후 각 자리수의 합을 구하여 출력하는 프로그램을 작성하라.*/
int main()
{
    // N = 1234  ==> 10
    // N % 10 ---> 4  add 4 to sum
    // N/10 = 123

    int N, sum = 0;
    scanf("%d", &N);

    int num;
    while (0 > N)
    {
        num = N % 10;
        sum += num;
        N /= 10;
    }

    printf("The sum is %d\n", sum);
}

int main()
{
    int N, sum = 0;
    scanf("%d", &N);

    while (N > 0)
    {
        sum += N % 10;
        N /= 10;
    }

    printf("The sum is %d\n", sum);
}

/*입력으로 하나의 양의 정수 N을 받은 후 2진수로 변환했으르 때 1의 개수를 구하여 출력하는 프로그램을 작성하라.
예를 들어 N=13이면 13 = 1101이므로 1은 3개이다.*/

int main()
{
    int N;
    int count = 0;
    scanf("%d", &N);

    while (N > 0)
    {
        count += (N % 2);
        N = N / 2;
    }

    printf("The number of 1 is %d\n", count);

    return 0;
}