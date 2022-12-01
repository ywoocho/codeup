/*문제 설명    
주현이 엄마는 주현이를 영재로 키우기 위해 매일 혹독한 기억력 테스트를 하고 있다.
N개의 숫자를 먼저 말해주고, M개의 질문을 하면서 그 숫자를 몇 번째로 불렀는지 테스트한다.
이번 테스트가 어려울 것을 예상하여 N개의 데이터를 부를 때 오름차순으로 부른다.
이 테스트를 통과할 경우 주현이는 최신 장난감 "또봇 W 쉴드온"을 받을 수 있다.
주현이를 도와 줄수 있는 프로그램을 작성하시오.*/

/*입력
첫째줄에 N이 입력된다. (1≤N≤1,000,000)
둘째 줄에 N개의 서로 다른 숫자가 공백으로 구분되어 오름차순으로  입력된다. (데이터값의 범위 : 1 ~ 100,000,000)
셋째줄에 질문의 수 M이 입력된다. (1≤M≤100,000)
단, 질문은 오름차순으로 묻지 않는다.
넷째 줄에 M개의 질문이 입력된다*/

/*출력
M개의 질문에 대해 그 숫자가 있었으면 그 숫자의 위치를 출력, 없었으면 -1을 차례대로 출력한다.*/

#include <stdio.h>
int bs(int arr[],int size, int item){ //이진탐색 정의
    int first=0; //처음값
    int last=size-1; //마지막값
    int mid; //중간값
    while(first<=last){ //처음값이 마지막값보다 작거나 같으면 
        mid=(first+last)/2; //중간값 구하기
        if(arr[mid]==item){ //중간값 번째 배열이 입력값과 동일할시 중간값 반환
            return mid;
        }else{
            if(item>arr[mid]){ //입력값이 중간값보다 크면
                first=mid+1; //처음값 변경
            }else{
                last=mid-1; //마지막값 변경
            }
        }
    }
    return -1;
}

int main(){
    int D;
    int num1[1000000]={0};
    int num2[100000]={0};
    int q;

    scanf("%d", &D);
    for(int i=0;i<D;i++){
        scanf("%d", &num1[i]);
    }

    scanf("%d", &q);
    for(int i=0;i<q;i++){
        scanf("%d", &num2[i]);
    }

    for(int i=0;i<q;i++){
        int t=bs(num1, D, num2[i]);
        if(t>-1){
            printf("%d", t+1);
        }else{
            printf("%d", t);
        }
    }
}
