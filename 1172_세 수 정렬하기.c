/*문제 설명      
세 수를 오름차순으로 정렬하려고 한다. (낮은 숫자 -> 높은 숫자)
예)
5 8 2   ====> 2 5 8    로 출력*/

/*입력
세 정수가 입력된다.*/

/*출력
낮은 숫자 부터 출력한다.*/

#include<stdio.h> 

int main() 
{
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c); //세 수 입력

	if (a>=b && a>=c) 
	{
		if (b>c){
			printf("%d %d %d", c, b, a);
        }else{
			printf("%d %d %d", b, c, a);
	    }
    }
	else if (b>=a && b>=c)
	{
		if (a>c){
			printf("%d %d %d", c, a, b);
        }else{
			printf("%d %d %d", a, c, b);
	    }
    }
	else
	{
		if (a>b) {
			printf("%d %d %d", b, a, c);
        }else{
			printf("%d %d %d", a, b, c);
	    }
    }
	return 0;
}