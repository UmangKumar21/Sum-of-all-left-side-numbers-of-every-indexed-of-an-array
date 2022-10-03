#include <stdio.h>
int main() {
    int u;
    int i,sum=0;
    scanf("%d",&u);
    int arr[u];
    for(i=0;i<u;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<u;i++){
        printf("%d ",sum);
        sum=sum+arr[i];
    }
}