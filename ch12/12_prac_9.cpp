#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main() {

	ifstream fin("c:\\windows\\system.ini");

	if (!fin) {
		cout << "읽기 실패";
		return 0;
	}
	string str;
	vector<string> v;
	int cnt = 0;

	while (!fin.eof()) {
		getline(fin, str);
		v.push_back(str);
	}

	cout << "c:\\windows\\system.ini 파일 읽기 완료"<<endl;
	cout << "라인 번호를 입력하세요. 1보다 작은 값을 입력하면 종료" << endl;

	while (true) {
		cout << ": ";
		cin >> cnt;
		if (cnt<1) {
			cout << "종료 합니다.";
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