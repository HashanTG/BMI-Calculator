#include<stdio.h>
int age;
char name[];
int main(){
printf("What us your name\n");
scanf("%S",&name);
printf("How old are you?");
scanf("%d", &age);
age_name(name, age);
return 0;
}

void age_name(char name, int age){
    printf("My name is %s .",name);
    printf("My age is %d .",age);

}
