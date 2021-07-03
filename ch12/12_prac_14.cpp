#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
	ifstream fin("c:\\windows\\system.ini",ios::in | ios::binary);
	
	char buf[1024];
	int num;
	while (!fin.eof()) {
		fin.read(buf, 1024);
	}
	num = fin.gcount();

	cout <<"파일의 크기: "<< num << endl;

	fin.close();

	return 0;
}