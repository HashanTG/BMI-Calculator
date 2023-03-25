#include<stdio.h>


int main(){
	float height,weight;
	float BMI;
	int password_1=123;
	int password_2;
	char name[5];
	printf("\t\tWELCOME To MEDI-CARE CENTER\n");
	printf("\tWhat is your name?\n");
	printf("\t");
	scanf("%[^\n]",&name);
	printf("\tHello %s\n",name);
	printf("\tWhat is the password_2? \n");
	printf("\t");
	scanf("%d",&password_2);
	if (password_2==password_1){
		printf("\tWhat is the your height? \n");
		printf("\t");
		scanf("%f",&height);
		printf("\tWhat is the your weight? \n");
		printf("\t");
		scanf("%f",&weight);
		BMI=weight/(height*height);
		printf("\tYour BMI value is %.3f\n",BMI);
	}else{
		printf("\tPASSWORD IS INCORRECT!");
	}

	return 0;
}
