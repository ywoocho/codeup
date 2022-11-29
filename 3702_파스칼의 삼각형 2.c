/*문제 설명      
다음과 같은 삼각형을 파스칼의 삼각형이라고 한다.
회전 변환된 이 삼각형에서 (r행, c열)의 값을 알 수 있는 프로그램을 작성하시오. 행과 열은 1부터 시작한다.*/

/*입력
자연수 r과 c가 입력된다. (1 ≤ r, c ≤ 50)*/

/*출력
출력
(r, c)의 원소 값을 100,000,000으로 나눈 나머지를 출력한다.*/

#include <stdio.h>

int memo[51][51];//row column을 저장할수있는 2차원 배열 변수 선언

int pascal(int row, int column){ //row column 입력시 해당 값을 리턴
    if(memo[row][column]){ //배열이 이미 저장되어있을경우 그 값을 리턴
        return memo[row][column];
    }
    if(row == 1 || column ==1){ //1행과 1열은 모두 1이므로 1을 리턴
        return 1;
    }
    return memo[row][column] = (pascal(row-1,column)+pascal(column,row-1)) % 100000000; 
    //(row,column) = (row,column-1) + (row-1,column) 
    //만약 2행 3열의 값을 구하고자 한다면 2행 2열과 1행 3열을 더해줘야한다

}
 
int main ()
{
    int r, c;
     
    scanf("%d%d", &r, &c); //자연수 r과 c가 입력된다
    printf("%d", pascal(r, c)); //pascal값을 출력한다
     
    return 0;
}