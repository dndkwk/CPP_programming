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
	
	cout << "���� ���� >> ";
	cin >> N;
	Circle* c = new Circle[N];
	
	
	for (int i = 0; i < N;i++) {
		cout << "�� " << i + 1 << "�� ������ >> ";
		cin >> r;
		c[i].setRadius(r);
		if (c[i].getArea() > 100) {
			cnt++;
		}
	}

	cout << "������ 100���� ū ���� " << cnt << "�� �Դϴ�";
}