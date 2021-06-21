#include<iostream>
#include"3_prac10_2.h"
using namespace std;

void Add::setValue(int x,int y) {
	this->a = x;
	this->b = y;
}

int Add::calculate() {
	return this->a + this->b;
}

void Sub::setValue(int x, int y) {
	this->a = x;
	this->b = y;
}

int Sub::calculate() {
	return this->a - this->b;
}

void Mul::setValue(int x, int y) {
	this->a = x;
	this->b = y;
}

int Mul::calculate() {
	return this->a * this->b;
}

void Div::setValue(int x, int y) {
	this->a = x;
	this->b = y;
}

int Div::calculate() {
	return this->a / this->b;
}