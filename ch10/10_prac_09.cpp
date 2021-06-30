#include<iostream>
#include<vector>
using namespace std;

int main() {
	vector<int> v;
	double sum=0;

	while(true) {
		cout << "정수를 입력하세요(0을 입력하면 종료)>>";
		int temp;
		cin >> temp;
		if (temp == 0) {
			break;
		}
		v.push_back(temp);
		sum += temp;
		for (int i = 0; i < v.size(); i++) {
			cout << v.at(i) << ' ';
		}
		cout << endl;
		cout << "평균 = " << sum / v.size() << endl;
	}

}