#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	ifstream fin("c:\\windows\\system.ini");

	if (!fin) {
		cout << "�б� ����";
		return 0;
	}
	int c;

	while ((c=fin.get())!=EOF) {
		cout << (char)toupper(c);
	}

	fin.close();
	
	return 0;
}