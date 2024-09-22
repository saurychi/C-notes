#include <stdio.h>
#include <math.h>

int main() {
	double Fn, Top, Bot,equation;
	
	printf("Input your Fn: ");
	scanf("%lf", &Fn);
	
	//fibonacci number equation
	Top = pow(1 + sqrt(5),Fn);
	Bot = pow(2,Fn) * sqrt(5);
	equation = Top / Bot;
	
	printf("Your Fn is equal to %lf",equation);
	
	return 0;
}
