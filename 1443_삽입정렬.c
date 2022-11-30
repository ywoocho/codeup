/*문제 설명     
오름차순 삽입 정렬은 '정렬된 데이터 셋에 뒤쪽에서 부터 원소를 하나씩 삽입하여 순서에 맞는 위치로 찾아가며 정렬하는 방식'이다.
이번 문제는 미리 작성된 코드를 보고 빈 칸에 들어갈 코드를 작성하는 것이다.
이 프로그램은 선택 정렬을 구현한 것이며, 실행 결과는 오름차순으로 정렬된다.
빈 칸에 들어갈 코드만 작성해서 제출하시오.
► 정렬 방식에 대한 자세한 내용은 다른 블로그를 참고하기 바란다. 
[미리 작성된 프로그램] - C/C++로 제출하는 경우에만 추가됩니다.
#include <stdio.h>
int a[10001];
int n, i, j, temp, key;
int main() {
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    for (i=2; i<=n; i++)
    {
        key=a[i];
// 이 부분에 들어가야 될 코드를 작성하여 제출
        {
            a[j+1]=a[j];
        }
        a[j+1]=key;
    }

    for (i=1; i<=n; i++)
        printf("%d\n", a[i]);
    return 0;
}*/

#include <stdio.h>
int a[10001];
int n, i, j, temp, key;
int main() {
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    for (i=2; i<=n; i++)
    {
        key=a[i];
        for(j=i-1;a[j]>=key;j--)
        if(a[j]>=key)
        {
            a[j+1]=a[j];
        }
        a[j+1]=key;
    }

    for (i=1; i<=n; i++)
        printf("%d\n", a[i]);
    return 0;
}