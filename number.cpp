#include "number.h"
#include<iostream>
using namespace std;
Number::Number()
{
}

Number::Number(double m)
{
	number = m;
}

Number::~Number()
{
}

void Number::print()
{
	cout << number << endl;
}

Number Number::add(const Number & other)
{
	return number += other.number;
}

Number Number::mul(const Number & other)
{
	return number *= other.number;
}

RealNumber::RealNumber()
{
}

RealNumber::RealNumber(double m)
	:Number::Number(m)
{
	rn = m;
}

RealNumber::~RealNumber()
{
}

IntegerNumber::IntegerNumber()
{
}

IntegerNumber::IntegerNumber(int m)
	:RealNumber::RealNumber(m)
{
	in = m;
}

IntegerNumber::~IntegerNumber()
{
}

ComplexNumber::ComplexNumber()
{
}

ComplexNumber::ComplexNumber(double m, double n)
{
	cn1 = m;
	cn2 = n;
}

ComplexNumber::~ComplexNumber()
{
}

void ComplexNumber::print()const
{
	if (cn2 < 0)
	{
		cout << cn1 << cn2 << "i" << endl;
	}
	else if (cn2 == 0)
	{
		cout << cn1 << endl;
	}
	else if (cn2 > 0)
	{
		cout << cn1 << "+" << cn2 << "i" << endl;
	}
}

ComplexNumber ComplexNumber::add(const ComplexNumber &other)
{
	return ComplexNumber(cn1 += other.cn1, cn2 += other.cn2);
}

ComplexNumber ComplexNumber::mul(const ComplexNumber &other)
{
	ComplexNumber c;
        c.cn1 = cn1 * other.cn1 - cn2 * other.cn1;
        c.cn2 = cn1 * other.cn2 + cn2 * other.cn1;
        return c;

}
	
