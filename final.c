#include<stdio.h>

int main(){
int i,j,r=5,s;
for(i=1;i<=5;i++){

        for(s=1;s<=(r-i);s++){
           printf(" ");
        }

    for(j=1;j<=i;j++){
        printf("* ");
    }
printf("\n");
}

return 0;
}
