/*문제 설명     
극장에 n개의 빈 좌석이 있다. 
k명의 관객들이 영화를 보기 위해서 왔다. 
이 관객들이 n개의 좌석에 앉을 수 있는 서로 다른 방법의 수를 구하는 프로그램을 작성하시오. 
(단, k명의 사람을 서로 구분하지 않는다.)*/

/*입력
첫 번째 줄에 n 과 k 가 공백으로 구분되어 입력된다.*/

/*출력
구한 답을 첫 번째 줄에 출력한다.*/

#include <stdio.h>

int chair(int a, int b){ //파스칼의 삼각형 점화식을 이용하여 함수를 구현
    if(b==1){
        return a; //aC1 = n
    }
    if(a==0 || a==1 || a==b){
        return 1; //aCa = 1Cb = 0Cb = 1
    }
    return chair(a-1,b-1)+chair(a-1,b); // (a-1)C(b-1) + (a-1)C(b)
}

int main(){
    int n,k;
    scanf("%d %d", &n, &k);
    printf("%d", chair(n,k));
    return 0;
    
}