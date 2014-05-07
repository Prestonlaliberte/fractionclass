#pragma once
#include <iostream>
#include <fstream>
using namespace std;
class Fraction
{
public:
	Fraction(void);
	~Fraction(void);
private:
	int num;//numerator
	int den;//denominator 
public:
	Fraction(int n, int d);
	void print(ostream & out);
	// add fraction to return sum as a new fraction
	Fraction plus(const Fraction & second);
	// reduce to lowest terms
	void reduce(void);
private:
	int gcd(int a, int b);
};

