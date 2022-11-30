/*문제 설명     
오름차순 선택 정렬은 '가장 작은 원소를 찾아 첫번째 위치로 옮기고, 남은 원소를 또 탐색하여 그 다음 작은 원소를 찾아 두번째 위치로 옮기고, ... 이런식으로 정렬하는 방식'이다.

이번 문제는 미리 작성된 코드를 보고 빈 칸에 들어갈 코드를 작성하는 것이다.

이 프로그램은 선택 정렬을 구현한 것이며, 실행 결과는 오름차순으로 정렬된다.

빈 칸에 들어갈 코드만 작성해서 제출하시오.

► 정렬 방식에 대한 자세한 내용은 다른 블로그를 참고하기 바란다. 

[미리 작성된 프로그램] - C/C++로 제출하는 경우에만 추가됩니다.
#include <stdio.h>
int a[10001];
int n, i, j, temp, min;
int main() {
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    for (i=1; i<n; i++) {
        min=i;
        for (j=i+1; j<=n; j++) {
// 이 부분에 들어가야 될 코드를 작성하여 제출
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    for (i=1; i<=n; i++)
        printf("%d\n", a[i]);
    return 0;
}*/

#include <stdio.h>
int a[10001];
int n, i, j, temp, min;
int main() {
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    for (i=1; i<n; i++) {
        min=i;
        for (j=i+1; j<=n; j++) {
// 이 부분에 들어가야 될 코드를 작성하여 제출
            if(a[j]<a[min]){
            min=j;
        }
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    for (i=1; i<=n; i++)
        printf("%d\n", a[i]);
    return 0;
}