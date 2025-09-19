#include<stdio.h>
int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        for(int j=1;j<=n;j++){
            if(i+j>n){
                printf("%d", j-(n-i));
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}