#include <stdio.h>

// 입력으로 두 양의 정수를 받은 후 두 정수의 최대공약수 GCD를 구해서 출력하는 프로그램을 작성하라.
//  euclid 알고리즘 사용하라
/* euclid 알고리즘 : 두 정수 x,y중에 크거나 같은 쪽을 x라고 하자.
만약 x가 y로 나누어 떨어지면 GCD는 y이다. 그렇지 않다면 x와 Y의 GCD는 x%y와 y의 gcd와 같다*/

int gcd(int p, int q)
{
    if (q == 0)
        return p;
    else
        return gcd(q, p % q);
}

int main()
{

    int x, y;
    scanf("%d %d", &x, &y);

    printf("%d", gcd(x, y));
}