#include<iostream>
using namespace std;

class Circle {
	int radius;
public:
	void setRadius(int radius) {
		this->radius = radius;
	}
	double getArea() {
		return 3.14 * this->radius * this->radius;
	}
};

int main() {
	int N,r,cnt=0;
	
	cout << "원의 개수 >> ";
	cin >> N;
	Circle* c = new Circle[N];
	
	
	for (int i = 0; i < N;i++) {
		cout << "원 " << i + 1 << "의 반지름 >> ";
		cin >> r;
		c[i].setRadius(r);
		if (c[i].getArea() > 100) {
			cnt++;
		}
	}

	cout << "면적이 100보다 큰 원은 " << cnt << "개 입니다";
}