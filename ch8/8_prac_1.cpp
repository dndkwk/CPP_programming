#include<iostream>
using namespace std;

class A {
public:
	A(int x) {
		cout << "������ A " << x << endl;
	}
};

class B : public A{
public:
	B() :A (20){
		cout << "������ B " << endl;
	}
	B(int x) :A (x+20){
		cout << "������ B " << x << endl;
	}
};

int main(void) {
	B b(15);
}