#include <iostream>
using namespace std;

int big(int a,int b) {
	int x = (a > b) ? a : b;
	if (x>100) {
		x = 100;
	}

	return x;
}

int big(int a, int b, int c) {
	int x = (a > b) ? a : b;
	if (x>c) {
		x = c;
	}
	return x;
}

//int big(int a, int b, int c=100) {
//	int x = (a > b) ? a : b;
//	if (x > c) {
//		x = c;
//	}
//	return x;
//}

int main() {
	int x = big(3, 5);
	int y = big(300, 60); 
	int z = big(30, 60, 50); 
	cout << x << ' ' << y << ' ' << z << endl;

	return 0;
}