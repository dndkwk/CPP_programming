#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main() {

	ifstream fin("c:\\windows\\system.ini");

	if (!fin) {
		cout << "�б� ����";
		return 0;
	}
	string str;
	vector<string> v;
	int cnt = 0;

	while (!fin.eof()) {
		getline(fin, str);
		v.push_back(str);
	}

	cout << "c:\\windows\\system.ini ���� �б� �Ϸ�"<<endl;
	cout << "���� ��ȣ�� �Է��ϼ���. 1���� ���� ���� �Է��ϸ� ����" << endl;

	while (true) {
		cout << ": ";
		cin >> cnt;
		if (cnt<1) {
			cout << "���� �մϴ�.";
			return 0;
		}
		else if (cnt >= 14) {
			continue;
		}
		cout << v[cnt - 1] << endl;
	}
	fin.close();
	return 0;
}