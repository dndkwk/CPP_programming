#include <iostream>
using namespace std;

int main() {
	double numbers[5];
	double answer = 0;
	cout << "5 ���� �Ǽ��� �Է��϶�>>";
	for (int i = 0; i < 5;i++) {
		cin >> numbers[i];//�Է�
		if (numbers[i] >= answer) {
			answer = numbers[i];//ū ���� ����
		}
	}

	cout << "���� ū �� = " << answer;


	return 0;
}