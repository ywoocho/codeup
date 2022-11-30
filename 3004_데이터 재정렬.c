/*문제 설명     
프로그래밍 문제를 풀다 보면 뒤죽박죽인 N개의 데이터를 숫자의 크기 순으로 0 ~ N-1까지의 숫자로 재정렬 해야되는 경우가 종종 있다.

예를 들어 N=5 이고,

50 23 54 24 123

이라는 데이터가 있다면,

2 0 3 1 4

가 된다.

데이터를 재정렬하는 프로그램을 작성하시오.*/
/*입력
첫째 줄에 데이터의 개수 N이 입력된다. ( 1 <= N <= 50,000)
둘째 줄에 공백으로 분리되어 N개의 서로 다른 데이터가 입력된다. (값의 범위:0~500,000)*/

/*출력
N개의 데이터를 0 ~ N-1로 재정렬하여 출력하라.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct _data { //data 구조체 선언
	int no;
	int num;
} data;

int comp(const void *a, const void *b) { //퀵정렬 사용을위한 비교함수
	return (((data*)a)->num - ((data*)b)->num);
}

int main(void) {
	int n;
	scanf("%d", &n); //데이터 개수 입력
	data a[50000];
	for(int i=0; i<n; i++) { //데이터 개수만큼 반복
		scanf("%d", &a[i].num); //데이터 입력
		a[i].no=i;
	}
	qsort((data*)a, n, sizeof(a[0]), comp); //퀵정렬로 데이터 정렬
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			if(i == a[j].no)
				printf("%d ", j); //재정렬 출력
	return 0;
}