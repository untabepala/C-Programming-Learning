#include<stdio.h>

int main(){
int i,j,r,c;
int a[r][c];
printf("en r");
scanf("%d",&r);
printf("en c");
scanf("%d",&c);

for(i=0;i<r;i++){
    for(j=0;j<c;j++){
       printf("enter a[%d][%d]",i,j);
       scanf("%d",&a[i][j]);
    }
}

return 0;
}
