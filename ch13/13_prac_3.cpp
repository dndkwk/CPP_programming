#include <iostream>
using namespace std;

int get(int x, int y){
	if (x < 0 || y < 0 || x>9 || y>9) {
		throw "input fault";
	}
	cout << "결과: " << x * y << endl;
};

int main() {
	int x,y;
	while (true) {
		try {
			cout << "두 개의 정수 입력:"<<endl;
			cin >> x >> y;
			get(x, y);
		}
		catch (const char *s) {
			cout << s << endl;
		}

	}
	
}