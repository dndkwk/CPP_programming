#include <iostream>
using namespace std;

extern "C" int get();
int mul(int a, int b);

int main() {
	int x = get();
	int y = get();

	cout <<"���� "<< mul(x, y)<<"�Դϴ�." << endl;
}