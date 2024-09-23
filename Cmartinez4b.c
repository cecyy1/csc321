
// Cecilia Martinez
//Csc-321

#include<stdio.h>
#include<stdlib.h>


int main(void){

int x=0;
float y=0.0;
char c='a';
double z=0.0;

//user input 
printf("Enter an integer: ");
scanf("%d", &x);

//compare the integer
if(x>1){
printf("Integer variable is greater than 1.\n");
}

//user input float 
printf("Enter a float: ");
scanf("%f", &y);
//compare float
if(y<5.0){
printf("Float variable is less than 5.0.\n");
}

//user for character 
printf("Enter a character: ");
scanf(" %c", &c);//conuses the newline leftovers
//compare

if(c!= 'a'){
printf("Character variable does not equal the letter 'a'.\n");
}
//double user

printf("Enter a double : ");
scanf("%lf", &z);
//compare 
if(z>= 10.0){
printf("Double variable is greater than or equal to 10.0.\n");
}
return 0;
}
