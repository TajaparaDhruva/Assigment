#include<stdio.h>
int main(){
    int n,count;
    printf("Enter n:");
    scanf("%d",&n);
     count=n*(n+1)/2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d  ",count);
            count--;
        }
        printf("\n");
    }
    return 0;
}