#include <stdio.h>

/*1~N 사이의 정수들 중에서 서로 약수-배수 관계인 정수 쌍의 개수를 계산해 출력하라. (a,b)와 (b,a)는 같은 쌍으로 간주하고 (a,a)는 카운트하지 않는다.*/

int main()
{
    int n;
    int count = 0;

    scanf("%d", &n);

    // (1,2) , (1,3), (1,4)...
    //         (2,3), (2,4), (2,5)...
    //                (3,4), (3,5), (3,6)...

    // for (int i = 1; i <= n; i++)
    //{
    //     for (int j = i + 1; j <= n; j++)
    //     {
    //         if (j % i == 0)
    //             count++;
    //     }
    // }

    // i/2보다 큰값이 i의 약수가 될수 없으므로 굳이 j를 i까지 확인 할 필요 없다.
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i / 2; j++)
        {
            if (i % j == 0)
                count++;
        }
    }

    printf("%d\n", count);
}