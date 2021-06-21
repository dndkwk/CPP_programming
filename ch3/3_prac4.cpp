#include<iostream>
using namespace std;

class CoffeMachine {
	int coffee;
	int water;
	int sugar;
public:
	CoffeMachine(int coffee,int water,int sugar) {
		//초기화
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
		cout << "커피 머신 상태, 커피:" << this->coffee << " 물:" << this->water <<" 설탕:"<< this->sugar <<endl;
	}

	void fill() {
		//모두 10으로 바꾼다.
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