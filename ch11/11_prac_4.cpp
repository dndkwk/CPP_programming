#include<iostream>
using namespace std;

int main() {

	char ch;
	while (true) {
		int ch = cin.get();
		if (ch == EOF) {
			break;
		}
		if (ch == ';') {
			cout.put('\n');
			cin.ignore(100, '\n');
		}
		else {
			cout.put(ch);
		}

	
	}


	return 0;
}