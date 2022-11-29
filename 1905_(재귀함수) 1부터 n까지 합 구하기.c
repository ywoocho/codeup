/*문제 설명        
정수 n이 입력으로 들어오면 1부터 n까지의 합을 구하시오.
이 문제는 반복문 for, while 등을 이용하여 풀수 없습니다.*/

/*입력
입력으로 자연수 n이 입력된다. (1<=n<=10,000)*/

/*출력
1부터 n까지의 합을 출력한다.*/

#include <stdio.h>

int sum(int k){
    if(k==1){ //k가 1이면 1을 리턴한다
        return 1;
    }else{ //k + sum(k-1)값을 리턴한다
    return k+sum(k-1);
    }
}

int main(){
    int n;
    scanf("%d", &n); //n이 입력된다
    printf("%d", sum(n)); //1부터 n까지의 합이 출력된다
    return 0;
}