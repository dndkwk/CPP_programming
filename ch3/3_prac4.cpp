#include<iostream>
using namespace std;

class CoffeMachine {
	int coffee;
	int water;
	int sugar;
public:
	CoffeMachine(int coffee,int water,int sugar) {
		//�ʱ�ȭ
		this->coffee = coffee;
		this->water = water;
		this->sugar = sugar;
	}
	void drinkEspresso() {
		this->coffee = this->coffee - 1;
		this->water = this->water - 1;
	}
	void drinkAmericano() {
		this->coffee = this->coffee - 1;
		this->water = this->water - 2;
	}

	void drinkSugarCoffee() {
		this->coffee = this->coffee - 1;
		this->water = this->water - 2;
		this->sugar = this->sugar - 1;
	}

	void show() {
		cout << "Ŀ�� �ӽ� ����, Ŀ��:" << this->coffee << " ��:" << this->water <<" ����:"<< this->sugar <<endl;
	}

	void fill() {
		//��� 10���� �ٲ۴�.
		this->coffee = 10;
		this->water = 10;
		this->sugar = 10;
	}

};

int main() {
	CoffeMachine java(5,10,3);
	java.drinkEspresso();
	java.show();
	java.drinkAmericano();
	java.show();
	java.drinkSugarCoffee();
	java.show();
	java.fill();
	java.show();

}