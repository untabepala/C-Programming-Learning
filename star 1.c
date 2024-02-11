#include<stdio.h>

int main(){
int row,a,b,c;
printf("Enter raw count:");
scanf("%d",&row);
for(a=1;a<=row;a++){
    for(b=1;b<=a;b++){
      printf("* ");
    }
    printf("\n");
}

return 0;
}
