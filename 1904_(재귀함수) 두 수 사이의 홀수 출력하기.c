/*문제 설명     
시작수(a)와 마지막 수(b)가 입력되면

a부터 b까지의 모든 홀수를 출력하시오.

이 문제는 반복문 for, while 등을 이용하여 풀수 없습니다.*/

/*입력
두 수 a, b 가 입력된다. (1<=a<=b<=100)*/

/*출력
a~b의 홀수를 모두 출력한다*/


#include <stdio.h>
int n,m;
int p(int a,int b){ 
    if( b < a ){ //a가 b보다 크면 p(a,b)값을 리턴한다
        return;
    }
    if(a%2!=0){ //홀수이면
        printf("%d ",a); //a를 출력한다
    }
    p(a+1,b); //p(a+1,b) 함수를 호출한다
}

int main(){
    scanf("%d %d", &n,&m); //두 수 n, m이 입력된다
    p(n,m); //n과 m사이 홀수를 출력한다.
    return 0;
}