#include <stdio.h>

int a[10001];
int n, i, j, tmp; 

int main()
{
    scanf("%d", &n); //데이터개수 입력
    for(i=1; i<=n; i++) //개수만큼반복
        scanf("%d", &a[i]); //데이터 입력
    
    for(i=1; i<=n; i++){//선택정렬로 오름차순 정렬
        for(j=n; j>=i; j--)
        {
            if(a[i]>a[j]){
                tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
    
    for(i=1; i<=n; i++) 
        printf("%d\n", a[i]);
    
    return 0;
}