#ifndef NUMBER_H
#define NUMBER_H

class Number
{
public:
	Number();
	Number(double);
	~Number();
	virtual void print();
	virtual Number add(const Number& other);
	virtual Number mul(const Number& other);
private:
	double number;
};

class RealNumber : public Number
{
public:
	RealNumber();
	RealNumber(double);
	~RealNumber();
private:
		double rn;
};

class IntegerNumber : public RealNumber
{
public:
	IntegerNumber();
	IntegerNumber(int);
	~IntegerNumber();
private:
	int in;
};

class ComplexNumber :public Number
{
public:
	ComplexNumber();
	ComplexNumber(double, double);
	~ComplexNumber();
	void print()const;
	ComplexNumber add(const ComplexNumber &);
	ComplexNumber mul(const ComplexNumber &);
private:
	double cn1;
	double cn2;
};

#endif

