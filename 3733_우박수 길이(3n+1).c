/*문제 설명     
콜라츠의 추측, 3n+1 문제, 우박수 문제라고 불리는 이 문제는 다음과 같다.
1, 어떤 자연수 n이 입력되면,
2. n이 홀수이면 3n+1을 하고,
3. n이 짝수이면 n/2를 한다.
4. 이 n이 1이 될때까지 2~3과정을 반복한다.
예를 들어 5는 5 → 16 → 8 → 4 → 2 → 1 이 된다.
여기서 5가 1이되기 위해 6개의 숫자를 나열하게 된다. 이것을 길이라고 하면 5의 길이는 6이된다.
시작수와 마지막 수가 입력되면 그 두 사이게 길이가 가장긴 우박수와 그 길이를 출력하시오.*/

/*입력
두 자연수 a, b가 공백으로 분리되어 입력된다. ( 1 <= a <= b <= 10,000,000 )*/

/*출력
출력
a에서 b사이에 길이가 가장긴 우박수와 그 길이를 출력한다. 만약 가장 긴 수가 두 개이상인 경우, 작은 숫자를 출력하시오.
*/

#include <stdio.h>
#include <stdlib.h>

int memo[10000001]; //메모 배열 크기 10000001 
int index=0;
// x의 우박수 리턴해줌
long long int f(long long int x, long long int len){

    if(x < 10000001 && memo[x] != 0){ //x 가 10000001보다 작고 이 우박수의 최종 길이를 알고있다면
        return memo[x] + len; //이 우박수의 최종 길이와 지금까지의 길이를 리턴한다
    }

    if(x % 2 == 1){ //x가 홀수이면
        x = 3*x+1; //3*x+1 을 x로 치환한다
    }else{
        x /= 2; //x/2를 x로 치환한다
    }
    return f(x, len+1); //x의 우박수를 길이+1 한 후 리턴

}

int main() {
	int a,b;
	scanf("%d %d", &a, &b); //두 자연수 a,b를 입력받는다

    memo[1] = 1;
	int n;
	for (int i = a; i <= b; i++) { //a가 b보다 작거나 같을동안 반복한다
   		//우박수의 길이를 기억한다 
		memo[i] = f(i, 0);
		if (memo[index] < memo[i]) //index 우박수가 i 우박수보다 작으면
			index = i; //index를 i로 치환한다
	}
	printf("%d %d", index, memo[index]); //가장 긴 우박수와 그 길이를 출력한다
}