/*문제 설명       
1부터 정수 n까지 출력하는 재귀함수를 설계하시오.

이 문제는 반복문 for, while 등을 이용하여 풀수 없습니다.*/

/*입력
정수 n이 입력된다(1<=n<=200)*/

/*출력
1부터 n까지 한 줄에 하나씩 출력한다.*/

#include <stdio.h>

void p ( int k ){
    if( k==0 ) { //k가 0이면 리턴한다
        return;
    } else {
        p ( k - 1 ); // p(k-1) 함수를 호출한다
        printf("%d\n",k); //k값을 출력한다
    }
}

int main(){
    int n;
    scanf("%d", &n); //n이 입력된다
    p(n); //1부터 n까지 숫자가 출력된다 
    return 0;
}