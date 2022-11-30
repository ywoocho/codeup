/*문제 설명     
순서없이 적힌 스케줄 메모가 있다.
메모는 스케줄명, 연, 월, 일 의 형태로 구성되어 있다.
이 메모를 토대로 날짜가 빠른 순서로 정렬하여 출력하고자 한다.
만약 날짜가 동일한 경우 스케줄명의 사전식 순서로 오름차순 정렬한다.*/

/*입력
첫째줄에 데이터의 개수 n이 입력된다.(1<=n<=100)
그 다음줄부터 n개의 데이터가 스케줄명, 년, 월, 일 형태로 한 줄에 하나씩 입력된다. 
스케줄명은 공백없이 알파벳소문자 99글자 이하, 년월일은 유효한 날짜만 입력된다.*/

/*출력
가장 먼저 해야 할 스케줄명부터 정렬하여  출력한다.*/

#include <stdio.h>
#include <string.h>

typedef struct _schedule { //schedule 구조체 선언
    char name[99];
    int date;
}schedule;

int main(){
    int n;
    schedule s[100];
    scanf("%d", &n); //데이터 개수가 입력된다
    for(int i=0;i<n;i++){
        int y,m,d;
        scanf("%s %d %d %d", s[i].name,&y,&m,&d); //이름 년 월 일이 입력된다
        s[i].date=y*1000+m*100+d; //yyyymmdd순으로 저장
    }
    
    for (int i=n-1;i>0;i--){ //버블정렬로 정렬
        for(int j=0;j<i;j++){
            if(s[j].date>s[j+1].date){
                schedule temp = s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }
    
    for (int i=n-1;i>0;i--){ //날짜가 같은것만 이름으로 다시 버블정렬로 정렬
        for(int j=0;j<i;j++){
            if(s[j].date == s[j+1].date && strcmp(s[j].name,s[j+1].name)>0){
                schedule temp = s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }
    
    for (int i=0;i<n;i++){
        printf("%s\n", s[i].name);
    }
    return 0;
    
}