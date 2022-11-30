/*문제 설명     
세종이는 정보과학 선생님인 JH를 도와주기 위해 정보과학 성적처리 프로그램을 만들기로 했다.
JH 선생님은 특정 과목에서 1등한 학생이 다른 과목에서는 어떤 성적을 얻었는지 관심이 많다.
다음 조건을 만족하는 프로그램을 작성해 보자*/

/*입력
첫째 줄에 데이터의 개수 nn (3<=n<=1003<=n<=100)
둘째 줄부터 n+1n+1줄에 학생 이름과 33과목 점수들이 공백으로 구분되어 입력된다. (입력 예시 참고)
단 이름의 길이는 최대 1010바이트 이내이다*/

/*출력
첫 번째 과목을 11등한 학생의 이름과 두 번째, 세 번째 과목의 석차를 공백으로 구분하여 출력한다.
단 첫 번째 과목의 11등은 11명이라고 가정한다.*/

#include <stdio.h>

typedef struct _student { //student 구조체
	char name[10];
	int f; //첫번째 과목 점수
	int f_rank; //첫번째 과목 등수
	int s; //두번째 과목 점수
	int s_rank; //두번째 과목 등수
	int t; //세번째 과목 점수
	int t_rank; //세번째 과목 등수
}student;

int main(void) {
	int n;
	student s[100];
	scanf("%d", &n); //데이터 개수가 입력된다
	for(int i=0; i<n; i++)
		scanf("%s %d %d %d", s[i].name, &s[i].f, &s[i].s, &s[i].t); //이름 첫번째과목 두번째과목 세번째과목이 입력된다
	
	//첫번재 과목으로 정렬
	for(int i=n-1; i>0; i--){
		for(int j=0; j<i; j++) {
			if(s[j].f<s[j+1].f){
				student tmp = s[j];
				s[j]=s[j+1];
				s[j+1]=tmp;
			}
		}
	}

    //1등 등수 메기기
	s[0].f_rank=1;

	//두번재 과목으로 정렬
	for(int i=n-1; i>0; i--){
		for(int j=0; j<i; j++) {
			if(s[j].s<s[j+1].s){
				student tmp = s[j];
				s[j]=s[j+1];
				s[j+1]=tmp;
			}
		}
	}
	
    //두번째 과목 정렬된 순으로 점수를 등수로 바꿔주기
	int cnt;
	for(int i=0; i<n; i++){
		if(i>0 && s[i-1].s==s[i].s) //같은 등수 처리
			s[i].s_rank = cnt;
		else {
			cnt = i+1;
			s[i].s_rank = cnt;
		}
	}
    
	//세번재 과목으로 정렬
	for(int i=n-1; i>0; i--){
		for(int j=0; j<i; j++) {
			if(s[j].t<s[j+1].t){
				student tmp = s[j];
				s[j]=s[j+1];
				s[j+1]=tmp;
			}
		}
	}
	
    //세번째 과목 정렬된 순으로 점수를 등수로 바꿔주기
	cnt=1;
	for(int i=0; i<n; i++){
		if(i>0 && s[i-1].t==s[i].t){ //같은 등수 처리
			s[i].t_rank = cnt;
		}
		else {
			cnt = i+1;
			s[i].t_rank = cnt;
		}
	}
	
    
	for(int i=0; i<n; i++) 
		if(s[i].f_rank == 1)
			printf("%s %d %d\n", s[i].name, s[i].s_rank, s[i].t_rank);
	return 0;
}