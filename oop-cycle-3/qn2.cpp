#include <iostream>
using namespace std;

template <class T>

class calc
{
	T a, b;
public:
	void get_num(void)
	{
		cout << "Enter First number : ";
		cin >> a;
		cout << "Enter Second number: ";
		cin >> b;
	}
	T sum(void) { return(a + b); }
	T subtraction(void) { return(a - b); }
	T multiply(void) { return(a * b); }
	T division(void) {return(a / b);}

};


int main()
{
	calc <int>calc1;
	cout << "Integer Values" << endl;
	calc1.get_num();
	calc <float> calc2;
	cout << "Float Values" << endl;
	calc2.get_num();
	int ans, c1;
	do{
	cout << "\n\tClass Templates\n";
	cout << "Enter the type of data you are going to enter : \n1. Integer \n2. Float \n3. Exit\n";
	cin >> c1;
		if (c1 == 1) {
			int sm, sub, mlt, div;
			int c2;
			cout << "\nInteger Operations \nAvailable options : ";
			cout << "\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\nChoose any option : ";
			cin >> c2;
			cout << "\n";
			if (c2 == 1)
			{
				sm = calc1.sum();
				cout << "Sum : " << sm << endl;
			}
			else if (c2 == 2)
			{
				sub = calc1.subtraction();
				cout << "Subtraction : " << sub << endl;
			}
			else if (c2 == 3)
			{
				mlt = calc1.multiply();
				cout << "Product : " << mlt << endl;
			}
			else if (c2 == 4)
			{
				div = calc1.division();
				cout << "Quotient : " << div << endl;
			}
			else if (c2 == 5)
			{
				break;
			}
			else {
				cout << "\nError 404 : Not Found\n";
				continue;
			}
		}
		else if (c1 == 2)
		{
			float sm, sub, mlt, div;
			int c2;
			cout << "\nFloat Operations\nAvailable options : ";
			cout << "\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\nChoose any option : ";
			cin >> c2;
			cout << "\n";
			if (c2 == 1)
			{
				sm = calc2.sum();
				cout << "Sum : " << sm << endl;
			}
			else if (c2 == 2)
			{
				sub = calc2.subtraction();
				cout << "Subtraction : " << sub << endl;
			}
			else if (c2 == 3)
			{
				mlt = calc2.multiply();
				cout << "Product : " << mlt << endl;
			}
			else if (c2 == 4)
			{
				div = calc2.division();
				cout << "Quotient : " << div << endl;
			}
			else if (c2 == 5)
			{
				break;
			}
			else {
				cout << "\nError 404 : Not Found\n";
				continue;
			}
		}
		else
			break;

		cout << "\n\nDo you want to continue?(1/0) ";
		cin >> ans;

	} while (ans);
	cout << "Thank You" << endl;
	return 0;

}
