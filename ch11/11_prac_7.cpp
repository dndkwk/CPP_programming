#include<iostream>
#include <cctype>
#include <iomanip>
using namespace std;

void D(int num) {
	cout << setw(6) << dec << num;
}

void H(int num) {
	cout << setw(7) << hex << num;
}

void C(int num) {
	if (isprint(num)) {
		cout << setw(7) << (char)num;
	}
	else {
		cout << setw(7) << ".";
	}
	
}

int main() {
    cout.setf(ios::left);
    for (int i = 0; i < 4; i++) {
        cout << setw(6) << "dec";
        cout << setw(7) << "hexa";
        cout << setw(7) << "char";
    }
    cout << endl;
    for (int i = 0; i < 4; i++) {
        cout << setw(6) << "---";
        cout << setw(7) << "----";
        cout << setw(7) << "----";
    }
    cout << endl;
    for (int i = 0; i < 128; i++) {
        if (i % 4 == 0 && i != 0)
            cout << endl;
        D(i);
        H(i);
        C(i);
    }
	return 0;
}