#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
public:
	Circle(int n) {
		this->radius = n;
	}

};

void swap(Circle &a,Circle &b) {
	int temp;
	temp = a.radius;
	a.radius = b.radius;
	b.radius = temp;
}

int main() {
	Circle a(1), b(10);
	cout <<"swap Àü a: "<< a.radius << " b: "<<b.radius << endl;
	swap(a, b);
	cout << "swap ÈÄ a: " << a.radius << " b: " << b.radius << endl;

	return 0;
}