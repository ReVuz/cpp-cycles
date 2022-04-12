#include <iostream>
using namespace std;
class A {
protected:
	int x;
public:
	void get_x(int a) {
		x = a;
	}
	void put_x(void) {
		cout << "Base Class A: \nx = " << x << endl;
	}
};
class B : public A {
protected:
	int y;
public:
	void get_y(int b) {
		y = b;
	}
	void put_y(void) {
		cout << "Derived class B: \ny = " << y << endl;
	}
};
class C {
protected:
	int z;
public:
	void get_z(int s) {
		z = s;
	}
	void put_z(void) {
		cout << "\nHybrid Base class C: \nz = " << z << "\n\n";
	}
};
class D : public B, public C {
	int total;
public:
	void display(void) {
		total = x + y;
		put_x();
		put_y();
		put_z();
		cout << "\nDerived Class D: \nx+y = " << total << "\n";
	};
};

int main()
{
	D details;
	cout << "\nEnter value for x: ";
	int r;
	cin >> r;
	details.get_x(r);
	cout << "\nEnter value for y: ";
	int y;
	cin >> y;
	details.get_y(y);
	cout << "\nEnter value for z: ";
	int z;
	cin >> z;
	details.get_z(z);
	details.display();
	return 0;
}
