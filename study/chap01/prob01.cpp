#include <stdio.h>

//1~100까지 정수의 합 구하기//
int main(){

    int sum = 0;

    for(int i=1; i<=100; i++){
        sum += i;
    }

    printf("%d\n",sum);

    return 0;
}