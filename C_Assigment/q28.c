#include<stdio.h>
int main(){
    int n,j;
    printf("Enter n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            printf(" ");
        }
        for(int k=0;k<=2*(n-i);k++){
            printf("%c",k+'A');
        }
        printf("\n");
    }
    return 0;
}

