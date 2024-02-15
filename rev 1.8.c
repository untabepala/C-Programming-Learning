#include<stdio.h>

int main(){
float a,b,r;
char op;
printf("Enter first number:");
scanf("%f",&a);
printf("Enter second number:");
scanf("%f",&b);
printf("Select Operator from (+,-,/,*):");
scanf(" %c",&op);

switch (op){
case '+':
    r=a+b;
    printf("%.2f=%f+%f",r,a,b);
    break;
case '-':
    r=a-b;
    printf("%f=%f-%f",r,a,b);
    break;
case '/':
    if(b==0){
        printf("Error: Division by Zero....");
    }else{
    r=a/b;
    printf("%f=%f/%f",r,a,b);
    }
     break;
case '*':
    r=a*b;
    printf("%f=%f*%f",r,a,b);
    break;
default:
    printf("Sorry, Invalied Operator");
}

return 0;
}
