/*문제 설명      
다음 두 가지 규칙을 지키면서 이진수를 만들고자 한다. 가능한 서로 다른 이진수의 개수를 구하는 프로그램을 작성하시오.
규칙1) 길이는 n이다.
규칙2) 0이 연속으로 존재하면 안된다.
예를 들어 길이가 3이라면, 길이가 3인 이진수는 다음과 같이 000, 001, 010, 011, 100, 101, 110, 111 8가지이다. 이 중 0이 연속으로 사용된 3개를 제외한 010, 011, 101, 110, 111 의 5가지가 답이다.*/

/*입력
이진수의 길이를 나타내는 자연수 
n이 입력된다. */

/*출력
가능한 경우의 수를 출력한다.*/

#include <stdio.h>

int d[20]={0};
int binary(int n){
    if(d[n-1]){
        return d[n-1];
    }
    else{
        return d[n-1] = binary(n-1)+binary(n-2);
    }
}

int main(){
    int n;
    d[0]=2; //길이가 1이면 경우의수는 2
    d[1]=3; //길이가 2이면 경우의수는 3
    scanf("%d", &n);
    printf("%d", binary(n));
}