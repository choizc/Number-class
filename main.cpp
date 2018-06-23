#include<iostream>
#include"number.h"
using namespace std;

int main()
{
	int choice = 0;
	cout<<"Please input a number:\n"<<"1--RealNumber\n"<<"2--IntegerNumber\n"<<"3--ComplexNumber"<<endl;
	while (cin >> choice)
	{
		if (choice == 1 | choice == 2 | choice == 3)
		{
			if (choice == 1)
			{
				double m = 0, n = 0;
				cout << "Please input two double type numbers: ";
				cin >> m >> n;
				RealNumber rn1(m);
				RealNumber rn2(n);
				RealNumber rn3(rn1);
				rn1.add(rn2);
				rn2.mul(rn3);
				cout << m << " + " << n << " = ";
				rn1.print();
				cout << m << " X " << n << " = ";
				rn2.print();
			}
			if (choice == 2)
			{
				int x = 0, y = 0;
				cout << "Please input two int type number: ";
				cin >> x >> y;
				IntegerNumber in1(x);
				IntegerNumber in2(y);
				IntegerNumber in3(in1);
				in1.add(in2);
				in2.mul(in3);
				cout << x << " + " << y << " = ";
				in1.print();
				cout << x << " X " << y << " = ";
				in2.print();
			}
			if (choice == 3)
			{
				double a = 0, b = 0, c = 0, d = 0;
				cout << "Please input two complex type number: ";
				cin >> a >> b >> c >> d;
				ComplexNumber cn1(a, b);
				ComplexNumber cn2(c, d);
				ComplexNumber cn3(cn1);
				ComplexNumber cn4(0, 0);
				ComplexNumber cn5(0, 0);
				cn4 = cn1.add(cn2);
				cn5.mul(cn3);
				cout << a << "+" << b << "i" << " + " << c << "+" << d << "i" << " = ";
				cn4.print();
				cout << a << "+" << b << "i" << " X " << c << "+" << d << "i" << " = ";
				cn5.print();
			}
		}
		else 
			cout << "Please input a correct number!" << endl;
	}
		return 0;
}
