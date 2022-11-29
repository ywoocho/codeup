/*문제 설명       
정수 n부터 1까지 출력하는 재귀함수를 설계하시오.

이 문제는 반복문 for, while 등을 이용하여 풀수 없습니다.*/

/*입력
정수 n이 입력된다(1<=n<=200)*/

/*출력
n부터 1까지 한 줄에 하나씩 출력한다.*/

#include <stdio.h>

int p(int k){
    printf("%d\n", k); //k를 출력한다
    if(k==1){ //k가 1이면 1을 리턴한다
        return 1;
    }else{ //k가 1이 아니면 (k-1)로 함수를 호출한다
        return p(k-1);
    }
}

int main(){
    int n;
    scanf("%d", &n); //n이 입력된다
    p(n); // 함수 p를 호출한다
    return 0;
}