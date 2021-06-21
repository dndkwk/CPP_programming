#include<iostream>
using namespace std;

class Add {
	int a;
	int b;
public:
	void setValue(int x,int y) {
		this->a = x;
		this->b = y;
	}
	int calculate() {
		return this->a + this->b;
	}
};

class Sub {
	int a;
	int b;
public:
	void setValue(int x, int y) {
		this->a = x;
		this->b = y;
	}
	int calculate() {
		return this->a - this->b;
	}
};

class Mul {
	int a;
	int b;
public:
	void setValue(int x, int y) {
		this->a = x;
		this->b = y;
	}
	int calculate() {
		return this->a * this->b;
	}
};

class Div {
	int a;
	int b;
public:
	void setValue(int x, int y) {
		this->a = x;
		this->b = y;
	}
	int calculate() {
		return this->a / this->b;
	}
};

int main() {
	Add a;
	Sub s;
	Mul m;
	Div d;
	int x, y;
	char c;
	while (true) {
		cout << "두 정수와 연산자를 입력하세요>>";
		cin >> x >> y >> c;
		switch (c){
		case '+':
			a.setValue(x, y);
			cout << a.calculate() << endl;
			break;
		case '-':
			s.setValue(x, y);
			cout << s.calculate() << endl;
			break;
		case '*':
			m.setValue(x, y);
			cout << m.calculate() << endl;
			break;
		case '/':
			d.setValue(x, y);
			cout << d.calculate() << endl;
			break;
		}
	}

}