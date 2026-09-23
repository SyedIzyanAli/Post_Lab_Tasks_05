#include<stdio.h>
int main(){

float tempreture;
printf("Enter Tempreture in Celcius: ");
scanf("%f",&tempreture);

if(tempreture<15){

printf("Cold!");
}
else if(15<=tempreture<=30){
    printf("Normal!");
}
else{
printf("Hot!");
}
getchar();
    return 0;
}