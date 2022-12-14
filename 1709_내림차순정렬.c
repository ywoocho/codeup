/*문제 설명        
  데이터를 입력받아 내림차순으로 정렬하는 프로그램을 작성하시오*/

/*입력
첫줄에는 데이터의 개수를 입력받는다.(100이하의 정수)

다음 줄에는 데이터가 입력된다.(100이하의 정수)*/

/*출력정렬된 데이터가 출력된다.*/

#include <stdio.h>

int main() 
{
    int a[100];
    int i, j, t, n;
    
    scanf("%d",&n); //데이터 개수 입력
    for(i = 0; i < n; i++) //개수만큼 반복
        scanf("%d",&a[i]); //데이터 입력
 
    for(i = 0; i < n-1; i++) {//i는 0부터 j-1까지반복
        for(j = i+1; j < n; j++) {//j는 i+1부터 n까지 반복
            if(a[i] < a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }    
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
    
    return 0;
}
