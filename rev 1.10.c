#include<stdio.h>

int main(){
int a=1;
int b,c;
float avg;
int sum=0;
printf("Enter any Number:");
scanf("%d",&b);
for(a=1;a<=b;a++){
        printf("Enter number:");
scanf("%d",&c);
sum+=c;

}
avg=sum/b;
printf("Avarage: %f",avg);
return 0;
}
