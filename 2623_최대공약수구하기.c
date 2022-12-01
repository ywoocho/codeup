/*문제 설명       
두 정수 a, b를 입력받아서, a, b의 최대공약수를 출력하시오.*/

/*입력
정수 a, b가 공백으로 구분되어 입력된다.(1<=a,b<=10,000)*/

/*출력
a, b의 최대공약수를 출력한다.*/

#include <stdio.h>

int gcd(int a, int b){ 
    int tmp,n;
    if(a<b){ //a가 큰값을 갖도록 교환
        tmp=a;
        a=b;
        b=tmp;
    }
    while(b!=0){
        n=a%b; 
        a=b;
        b=n;
    }
    return a;
}

int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    printf("%d", gcd(a,b));
    return 0;
}