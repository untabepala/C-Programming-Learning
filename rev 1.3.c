#include<stdio.h>

int main(){
int a,b;
printf("Enter number1:");
scanf("%d",&a);
printf("Enter number2:");
scanf("%d",&b);
if(a==b){
    printf("%d and %d Equal\n",a,b);
}else{
printf("%d and %d Inequal\n",a,b);
}
 if(a>b){
printf("%d is Greater than %d \n ",a,b);
}else{
printf("%d is Lower than %d \n",a,b);
}
return 0;
}
