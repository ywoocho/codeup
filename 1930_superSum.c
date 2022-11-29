/*문제 설명      
SuperSum 함수는 다음과 같이 정의된다.

      SuperSum(0,n)=n (n은  모든 양의 정수)

      SuperSum(k,n)=SuperSum(k−1,1)+SuperSum(k−1,2)+...+SuperSum(k−1,n)
k와 n이 여러개 주어진다. SuperSum의 값을 각각 출력하시오.*/

/*입력
k(1<=k<=14)와 n(1<=n<=14)이 입력된다. 입력의 끝은 EOF(End Of File)이다.

입력 처리 방법)

while( scanf("%d %d", &k, &n) != EOF )
	printf("%d\n", SuperSum(k, n));*/

/*출력
SuperSum(k,n)의 값을 각 행에 하나씩 출력한다.*/

#include <stdio.h>

int memo[15][15]; //메모 2차원 배열 선언 ; 크기 최대 15(입력값 1~14개)

int sum(int k, int n) 
{
	if(memo[k][n]) {
        return memo[k][n]; //메모가 저장되어있을 경우 메모값을 리턴한다
    }
    if(k == 0) {
        return n; // k가 0일경우 n값을 리턴한다
    }
	for(int i = 1; i <= n; i++){ //i는 1부터 n까지 반복한다
        
		memo[k][n] += sum(k-1, i); 
    }
	return memo[k][n]; //메모값을 리턴한다
}

int main()
{
	int k, n;
	while( scanf("%d%d", &k, &n) != EOF ) 
		printf("%d\n", sum(k, n) );

	return 0;
}