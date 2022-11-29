/*문제 설명      
n이 입력되면 다음과 같은 삼각형을 출력하시오.
예)
n 이 5 이면
*
**
***
****
*****
이 문제는 반복문 for, while 등을 이용하여 풀수 없습니다.*/

/*입력
길이 n이 입력된다.(1<=n<=150)*/

/*출력
삼각형을 출력한다.*/
#include <stdio.h>
  
void f(int k, int t) //k번째 줄 t번째 별 출력
{
    if(k == 1) //1번째 줄에 별을 출력한다
    {
        printf("*");
        return ;
    }
      
    if(t == 1) //t가 1이면 k를 하나씩 빼준 후 줄을 바꾼다
    {
        f(k-1, k-1);
        printf("\n");
    }
    else{//(k,t-1)값을 입력한다
        f(k, t-1);
    }
    printf("*");//별을 한개 출력한다
    return ;
}
  
int main ()
{
    int n;
      
    scanf("%d", &n); //길이 n이 입력된다
    f(n, n);
    return 0;
}
