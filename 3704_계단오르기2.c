/*문제 설명       
n개의 계단이 있다.

어떤 사람이 계단을 오르려 하는데 이 사람은 계단을 한번에 1계단 2계단 또는 3계단씩 오를 수 있다.

이 사람이 계단을 오를수 있는 경우의 수를 1000으로 나눈 나머지를 구하여라*/

/*입력
계단의 수 n이 입력된다. ( 1 <= n <= 100,000 )*/

/*출력
계단을 오를 수 있는 가지수에 1000으로 나눈 나머지를 출력한다.*/

#include<stdio.h>
 
int memo[1000001] = {1, 1, 2}; //메모 배열 크기 1000001
 
int f(int k) //계단의 개수가 입력되면 오를수 있는 경우의 수를 출력한다
{
    if (memo[k]) { //메모에 값이 있으면 그 값을 출력한다
        return memo[k];
    }else{ // 메모에 값이 없으면 k-3번째,k-2번째,k-1번째 계단으로 오를수있는 경우의 수를 모두 합해준다
        return memo[k] = (f(k-3) + f(k-2) + f(k-1)) % 1000;
    }
}
 
int main()
{
    int x;
    scanf("%d", &x); //계단의 수를 입력받는다.
    printf("%d", f(x)); //계단에 오를 수 있는 가지수를 출력한다.
    return 0;
}