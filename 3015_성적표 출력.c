/*문제 설명     
세종이는 정보과학 선생님인 JH를 도와주기 위해 정보과학 성적처리 프로그램을 만들기로 했다.

JH 선생님은 학생들의 명단과 점수를 입력하면 상위 m명의 학생 명단을 출력해 주기를 원한다.

다음 조건을 만족하는 프로그램을 작성해 보자.*/

/*입력
첫째 줄에 데이터의 개수 n (3<=n<=100)과 출력인원 m (1<=m<=n)이 공백으로 구분되어 입력된다.

둘째 줄부터 학생 이름과 점수(0 100)가 공백으로 구분되어 입력된다. 

단 이름의 길이는 최대 10바이트 이내이다.*/

/*출력
상위 m명의 학생명단을 출력한다.

단, 출력순서는 점수가 높은 학생이 먼저 출력되며, 점수가 같을 경우 입력 순서가 빠른 순서로 출력한다.*/

#include <stdio.h>

typedef struct _student{ //student 구조체 선언
    char name[10];
    int score;
}student;

int main(){
    int n,m;
    scanf("%d %d", &n, &m); //데이터개수 출력인원 입력
    student s[100];
    for(int i=0;i<n;i++){
        scanf("%s %d", s[i].name,&s[i].score);//학생이름 성적 입력
    }
    
    for(int i=n-1;i>0;i--){//버블정렬로 점수순으로 정렬
        for (int j=0;j<i;j++){
            if(s[j].score<s[j+1].score){
                student temp = s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }
    for(int i=0;i<m;i++){
        printf("%s\n", s[i].name); //출력인원 만큼 학생이름 출력
    }
    return 0;
}