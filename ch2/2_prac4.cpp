#include <iostream>
using namespace std;

int main() {
	double numbers[5];
	double answer = 0;
	cout << "5 개의 실수를 입력하라>>";
	for (int i = 0; i < 5;i++) {
		cin >> numbers[i];//입력
		if (numbers[i] >= answer) {
			answer = numbers[i];//큰 값을 저장
		}
	}

	cout << "제일 큰 수 = " << answer;


	return 0;
}