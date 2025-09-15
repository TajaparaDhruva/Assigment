#include<stdio.h>
int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    for(int i=65;i<=64+n;i++){
        for(int j=65;j<=64+n;j++){
            printf("%c",j);
        }
        printf("\n");
    }
    return 0;
}