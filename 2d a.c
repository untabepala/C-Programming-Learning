#include<stdio.h>

int main(){

int i,j;
int a[2][3];


for(i=0;i<2;i++){
    for(j=0;j<3;j++){
printf("Enter a[%d][%d]:",i,j);
        scanf("%d",&a[i][j]);
    }
}
for(i=0;i<2;i++){
    for(j=0;j<3;j++){
printf("%d",a[i][j]);
printf("\t");
    }
    printf("\n");
}





int m,n;
int b[2][3];


for(m=0;m<2;m++){
    for(n=0;n<3;n++){
printf("Enter b[%d][%d]:",m,n);
        scanf("%d",&b[m][n]);
    }
}
for(m=0;m<2;m++){
    for(n=0;n<3;n++){
printf("%d",b[m][n]);
printf("\t");
    }
    printf("\n");
}

return 0;
}
