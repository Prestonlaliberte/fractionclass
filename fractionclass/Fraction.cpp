#include "Fraction.h"



Fraction::Fraction(void)
	: num(0)
	, den(1)
{
}


Fraction::~Fraction(void)
{
}


Fraction::Fraction(int n, int d)
	:num(n), den(d)

{
}


void Fraction::print(ostream & out)
{
	cout << num << "/" <<den<<" ";

}


// add fraction to return sum as a new fraction
Fraction Fraction::plus(const Fraction & second)
{
	int n=num*second.den+den*second.num;
	int d=den*second.den;
	Fraction answer(n,d);
	answer.reduce();
	return answer; 
}


// reduce to lowest terms
void Fraction::reduce(void)
{
	int d= gcd(num,den);
	num /=d;
	den /=d;
}


int Fraction::gcd(int a, int b)
{
	int t;
	while(b!=0){
		t=b;
		b=a&t;
		a=t;
}
