#include<stdio.h>
int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    for(int i=65;i<=64+n;i++){
        for(int j=65;j<=i;j++){
            printf("%c",j);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}