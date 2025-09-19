#include<stdio.h>
int main(){
    int n,count=2;
    printf("Enter n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",count);
            count=count+2;
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}