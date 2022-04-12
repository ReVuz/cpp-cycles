#include <iostream>
using namespace std;
class car_bike {
protected:
	int x;
public:
	void get_x(int a) {
		x = a;
	}
	void put_x(void) {
		cout << "\n//Base Class1 \nprice of car : " << x << endl;
	}
};
class vehicle : public car_bike {
protected:
	int y;
public:
	void get_y(int b) {
		y = b;
	}
	void put_y(void) {
		cout << "//Derived class \nPrice of bike : " << y << endl;
	}
};
class fuel {
protected:
	int z;
public:
	void get_z(int s) {
		z = s;
	}
	void put_z(void) {
		cout << "\n//Base class2 \nDiesel/Petrol price: \nz = " << z << "\n\n";
	}
};
class Total : public fuel, public vehicle {
	int total;
public:
	void display(void) {
		total = x + y;
		put_x();
		put_y();
		put_z();
		cout << "\n//Child Class \nTotal price : " << total << "\n";
	};
};

int main()
{
	Total details;
	cout << "\nEnter price of any car : ";
	int r;
	cin >> r;
	details.get_x(r);
	cout << "\nEnter price of any bike : ";
	int y;
	cin >> y;
	details.get_y(y);
	cout << "\nEnter diesel or petrol expenses : ";
	int z;
	cin >> z;
	details.get_z(z);
	details.display();
	return 0;
}
