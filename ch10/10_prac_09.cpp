#include<iostream>
#include<vector>
using namespace std;

int main() {
	vector<int> v;
	double sum=0;

	while(true) {
		cout << "������ �Է��ϼ���(0�� �Է��ϸ� ����)>>";
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
		cout << "��� = " << sum / v.size() << endl;
	}

}