#include<stdio.h>

int main(){
int i,j,n,s;
printf("Enter raw count:");
scanf("%d",&n);

for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("*");
        }
    printf("\n");
}

return 0;
}
