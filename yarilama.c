#include<stdio.h>
#include<conio.h>
#include<math.h>
#define hata 0.01

float f(float x)
{
	return pow(x,3)+2*x*x+6*x+3;
}

int main()
{
	float a=-1;
	float b=0;
	float x0,xk;
	
	if(f(a)*f(b)>0)
	{
		printf("Wrong Range");
		return 1;
		
	}
	
	x0=(a+b)/2;
	printf("%f\n",x0);
	
	if(f(a)*f(x0)<0)
		b=x0;
	else
		a=x0;
	
	do
	{
		xk=x0;
		x0=(a+b)/2;
		printf("%f\n",x0);
		
		if(f(a)*f(x0)<0)
			b=x0;
		else
			a=x0;	
			
	}
	
	while(fabs(xk-x0)>hata);
	
	printf("Approximate Result: %f\n",x0);
	getch();
}
