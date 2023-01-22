#include <stdio.h>
#include <math.h>

#define MAX 360 //macro definition
#define MIN 0 //macro definition
#define STEP 10

//각도 0도에서 360도까지 10도 단위로 sin함수값을 계산하여 출력한다//
int main(){

    //c언어에서 사칙연산자들은 피연산항들이 모두 정수일때 그것의 값은 무조건 정수임 
    //double r = 3.141592*(10/180);

    double pi = 4.0 * atan(1.0);

    for(int degree = MIN; degree <= MAX; degree += STEP){
        double r = pi*(degree / 180.0);
        double v = sin(r);
        printf("%d    %f\n", degree, v );
    }

    return 0;
    
}