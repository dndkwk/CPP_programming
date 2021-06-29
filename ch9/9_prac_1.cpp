#include<iostream>
using namespace std;

class Shape {
public:
	void paint() { draw(); }
	virtual void draw() = 0;
};


class Circle : public Shape {
	int radius;
public:
	Circle(int radius=1) {
		this->radius = radius;
	}

	double getArea() {
		return 3.14 * radius * radius;
	}

	virtual void draw() {
		cout<<"������="<<this->radius<<"�� ��";
	}

};

int main() {
	Circle* p = new Circle(10);
	p->paint();

}