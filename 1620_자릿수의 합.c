/*문제 설명      
어떤 수 n이 입력되면 n의 각 자릿수의 합이 한 자리가 될때까지 계산하여 출력하시오.
예) 1234567
1234567 → 1+2+3+4+5+6+7 = 28 → 2 + 8 = 10 → 1 + 0 = 1*/

/*입력
자연수 n이 입력된다. (1 <= n <= 10,000,000)*/

/*출력
자릿수의 합이 한자리가 될때까지 계산하여 출력한다.*/

#include <stdio.h>

int sum(int n); //sum 함수 선언

int sum(int n) //sum 함수 정의
{
    if(n/10 == 0){ //몫이0이면 n을 반환
        return n;
    }
    else return sum(n/10) + sum(n%10); //몫과 나머지를 합함
}
int main()
{
    int j, n, t, total=0;
    scanf("%d", &n); //자연수 n 입력
   
    t = sum(n); 
   
    while(t >= 10 ){ //합이 10이상이면 함수 호출
        t = sum(t);
    }
   
    printf("%d", t); //합 출력
   
    return 0;
}

