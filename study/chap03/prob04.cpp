#include <stdio.h>

/*키보드로부터 여러 개의 정수를 순차적으로 입력 받는다. 짝수가 입력되면 무시하고
홀수가 입력되면 더해 나간다. 더해진 홀수의 개수가 10개가 되면 합을 출력하고 종료한다*/
int main()
{
    int sum = 0;
    int count = 0;

    // 무한루프
    while (1)
    {
        int input;
        scanf("%d", &input);

        if (input % 2 == 1) // 홀수 검사
        {
            sum += input;
            count++;
        }

        if (count == 10)
        {
            printf("The sum is %d\n", sum);
            break;
        }
    }
    return 0;
}

// ver 2 continue
int main()
{
    int sum = 0;
    int count = 0, input;

    while (1)
    {
        scanf("%d", &input);

        if (input % 2 == 0)
            continue;

        sum += input;
        count++;
        if (count == 10)
            break;
    }
    printf("The sum is %d\n", sum);

    return 0;
}

/*키보드로 부터 연속해서 정수를 입력받아 합을 구한다. 사용자가 -1을 입력하면 합을 출력하고 종료한다*/
// ver 1
int main()
{
    int sum = 0;
    int input = 0;

    while (input != -1) // 0 false, others true
    {
        scanf("%d", &input);

        if (input == -1)
        {
            break;
        }
        sum += input;
    }

    printf("%d\n", sum);

    return 0;
}

// ver 2 while with break
int main()
{
    int sum = 0;
    int input;

    while (1) // 0 false, others true
    {
        scanf("%d", &input);

        if (input == -1)
        {
            break;
        }
        sum += input;
    }

    printf("The sum is %d\n", sum);

    return 0;
}

/*키보드로 부터 연속해서 정수(음수일 수도 있음)을 입력받아 합을 구한다. 합이 0이되면
입력된 정수의 개수를 출력하고 종료한다*/
int main()
{
    int sum = 0;
    int count = 0;
    int input;

    while (1)
    {
        scanf("%d", &input);

        sum += input;
        count++;

        if (sum == 0)
        {
            printf("The count is %d\n", count);
            break;
        }
    }
}
