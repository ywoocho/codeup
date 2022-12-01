/*문제 설명    
극장에 n개의 빈 좌석이 있다. 
k명의 관객들이 영화를 보기 위해서 왔다. 
이 관객들이 n개의 좌석에 앉을 수 있는 서로 다른 방법의 수를 구하는 프로그램을 작성하시오. 
(단, k명의 사람을 서로 구분하지 않으며, 한 명이 좌석에 앉으면 그 양 옆자리는 비어 있도록 배치해야 한다.)*/

/*입력
첫 번재 줄에 n 과 k 가 공백으로 구분되어 입력된다.*/

/*출력
구한 답을 첫 번째 줄에 출력한다.*/

#include<stdio.h>

int n, count = 0, k;

void f(int b, int p)
{
	if(!p)
	{
		count++;
		return;
	}
	if(p==1)
	{
		count += b;
		return;
	}
	for(int i=p*2-3; i<=b-2; i++){
	    f(i, p-1);
    }
}

int main()
{
	scanf("%d %d", &n, &k);
	if(n-k*2+1 >=0){
		f(n, k);
    }else{
		count = 0;
    }
    printf("%d\n", count);
	return 0;
}

