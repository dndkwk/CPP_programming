#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	ifstream fsrc("c:\\windows\\system.ini",ios::in | ios::binary);
	ofstream fdest("c:\\temp\\system.txt", ios::out | ios::binary);

	if (!fsrc) {
		cout << "읽기 실패";
		return 0;
	}

	if (!fdest) {
		cout << "읽기 실패";
		return 0;
	}

	fsrc.seekg(0, ios::end);
	int length = fsrc.tellg();
	
	for (int i = 0; i < length;i++) {
		fsrc.seekg(length-i-1,ios::beg);
		int c = fsrc.get();
		fdest.put((char)c);
	}
	

	fsrc.close();
	fdest.close();

	return 0;
}