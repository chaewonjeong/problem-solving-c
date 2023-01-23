#include <stdio.h>
/*두 정수 s와 t를 입력받아(단 s <= t) s에서 t사이의
정수들 중에서 2혹은 3의 배수인것들의 합을 계산하여 출력한다.*/
/*2혹은 3의 배수인 것들과 그렇지 않은 것들의 개수를 각각 구하여 출력한다.*/

int main()
{

    int t, s;
    int sum = 0;
    int count1 = 0;
    int count2 = 0;

    scanf("%d", &s);
    scanf("%d", &t);

    for (int i = s; i <= t; i++)
    {
        //|| or, && and
        if (i % 2 == 0 || i % 3 == 0)
        {
            sum += i;
            count1++;
        }
        else
        {
            count2++;
        }
    }
    printf("s is %d, t is %d\n", s, t);
    printf("sum is %d, count1 is %d, count2 is %d\n", sum, count1, count2);
    return 0;
}