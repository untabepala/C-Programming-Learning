#include<stdio.h>

int main(){
int age;
printf("Enter Your Age:");
scanf("%d",&age);
if(age<18){
    printf("Not eligible to vote for the election");
}else{
printf("Eligible to vote for the election");
}
return 0;
}
