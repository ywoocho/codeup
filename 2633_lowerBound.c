/*문제 설명       
n개로 이루어진 정수 집합에서 원하는 수 k이상인 수가 처음으로 등장하는 위치를 찾으시오.

단, 입력되는 집합은 오름차순으로 정렬되어 있으며, 같은 수가 여러 개 존재할 수 있다.*/

/*입력
첫 줄에 한 정수 n과 찾고자 하는 값 k가 공백으로 구분되어 입력되고,
둘째 줄에 n개의 정수가 공백으로 구분되어 입력된다.
(단, 2<=n<=100,000 , 각 원소의 크기는 100,000,000을 넘지 않는다.)*/

/*출력
찾고자 하는 원소의 위치를 출력한다. 만약 모든 원소가 k보다 작으면 n+1을 출력한다.*/

#include <stdio.h>

int main(){
    int n,k,p=-1;
    int tmp=0;
    scanf("%d %d", &n, &k); //정수n, 찾고자하는 값k 입력
    for(int i=0;i<n;i++){ //n만큼 반복
        scanf("%d", &tmp);
        if(tmp>=k && p==-1){ //원소가 k보다 크거나 같고 p가-1이면
            p=i+1; //p는 원소 값으로 대체
        }
    }
    if(p==-1){
        p=n+1;
    }
    printf("%d", p);
    return 0;
}