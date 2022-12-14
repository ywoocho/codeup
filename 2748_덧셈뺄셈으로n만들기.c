/*문제 설명    
영일이는 숫자 0에서 n개의 수를 덧셈과 뺄셈을 이용하여 m으로 만들려고 한다.
예를 들어 n=2이고 1, -1로 m=0을 만드는 경우는 다음과 같다.
0 + 1 + (-1) = 0
0 - 1 - (-1) = 0
n개의 수를 덧셈과 뺄셈을 이용하여 m이 되는 경우의 수를 모두 구하시오.*/

/*입력
첫 번째 줄에 m이 입력된다.
두 번째 줄에 n이 입력된다. (0<=n<=20)
세 번째 줄에 n개의 그 수들이 입력된다.  (입력되는 수들의 최대 합은 int범위 이내이다.)*/

/*출력
m을 만들 수 있는 경우의 수를 출력한다. 입력되는 수들은 모두 사용해야 하며 한 번씩만 사용할 수 있다.*/

#include <stdio.h>

int n, m, arr[21], cnt;

void pm(int a, int sum){ 
    if(a<n){
        pm(a+1,sum+arr[a]); //합에서 더한다
        pm(a+1,sum-arr[a]); //합에서 뺀다
    }else if(sum==m){ //합과 입력값이 같으면 개수를 센다
        cnt++;
    }
}

int main(){
    scanf("%d %d", &m, &n); 
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    pm(0,0);
    printf("%d", cnt);
    
    return 0;
}