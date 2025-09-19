#include<stdio.h>
int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
    for(int o=2;o<=n;o++){
        for(int l=2;l<o+1;l++){
            printf(" ");
        }
        for(int m=2;m<=2*(n-o)+2;m++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

