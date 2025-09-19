#include<stdio.h>
int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        for(int j=0;j<=n;j++){
            if(i+j>n){
                printf("%c", j-(n-i)-1+'A');
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}