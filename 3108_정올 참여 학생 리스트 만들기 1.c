/*문제 설명     
세종이는 주말에 정보 과학실에서 정보 올림피아드 준비를 하려고 한다.
JH 선생님은 정보 과학실 사용 조건으로 정보 올림피아드 참가 학생 명단을 작성하는 프로그램을 작성하라고 하셨다.
짖굳은 JH 선생님은 입력 데이터를 만들 때 일부러 중간에 잘못된 값을 끼워 왕창 끼워 넣었다.
그리고 잘못된 데이터를 제거하는 방법을 설명해 주었다.
다음 조건에 따라 프로그램을 만들고 올바른 명단만 출력해 보자.*/

/*
입력
첫째 줄에 입력 데이터의 개수 n이 입력된다. (10<=n<=100)
둘째 줄부터 n+1번째 줄까지 처리 코드c(문자 1자리), 수험 번호 no(1<=no<=10,000), 이름(10바이트 이내)이 입력된다.
처리 코드에 따라 입력 데이터를 메모리에 저장하거나 삭제해야 한다. 처리 코드가 'I'이면 데이터를 수험 번호 순서에 맞게 삽입한다.
만약 입력할 때 이미 수험 번호가 입력되어 있다면 아무 작업도 하지 않는다.
처리 코드가 ‘D’이면 메모리의 데이터 중에서 해당 수험 번호를 찾아 삭제한다.
만약 처리 코드가 'D'이고 해당 수험 번호가 존재하지 않으면 아무 작업도 하지 않는다.
마지막으로 n+2번째 줄에 올바른 데이터의 위치를 나타내는 정수 5개가 입력된다.*/

/*출력
메모리에 저장된 데이터 중에서 올바른 데이터 위치에 있는 값의 명단을 출력한다.*/

#include <stdio.h>
#include <string.h>

typedef struct _student { //student 구조체 선언
	int code;
	char name[10];
}student;

student s[100]; //student 구조체 배열 선언
int N; //입력받을 횟수 N
int cnt = 0; //s 배열 요소 개수 n

void I(int code, char name[10]) {
    for(int i=0; i<cnt; i++)
        if(s[i].code == code) //코드가 겹치면
            return;
    s[cnt].code = code; //겹치지 않으면 코드 저장
    strcpy(s[cnt].name, name); //이름 저장
    cnt++;
}

void D(int code) {
    for(int i=0; i<cnt; i++){
        if (s[i].code == code){ //코드가 겹치면
            for(int j=i; j<cnt-1; j++) //배열을 지운다
                s[j]=s[j+1];
            cnt--;
            return;
        }
    }
    return;
}

int main(void) {
    int l[5];

    
	scanf("%d", &N); //첫줄에 갯수가 입력된다
	for(int i=0; i<N; i++) { //N줄 데이터가 입력된다
		char c, name[10];
		int code;
        scanf(" %c %d %s", &c, &code, name); //코드c, 수험번호, 이름이 입력된다
		if(c == 'I') //코드가 i이면 I함수호출
            I(code, name); 
		else if(c == 'D') //코드가 d이면 D함수호출
            D(code);
	}
    for(int i=0; i<5; i++) {
        scanf("%d", &l[i]);
    }

    //버블정렬로 정렬한다
    for(int i=cnt-1; i>0; i--) {
        for(int j=0; j<i; j++) {
            if(s[j].code > s[j+1].code) {
                student tmp = s[j];
                s[j]=s[j+1];
                s[j+1]=tmp;
            }
        }
    }

    
    for(int i=0; i<5; i++)
        for(int j=0; j<cnt; j++)
            if(l[i]-1 == j)
                printf("%d %s\n", s[j].code, s[j].name);

    return 0;
}