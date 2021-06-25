#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class Random {
public:
    // �׻� �ٸ� �������� �߻���Ű�� ���� seed�� �����ϴ� �Լ�
	static void seed() {// ���� ����
		srand((unsigned)time(0));
	}
	static int nextInt(int min = 0, int max = 32767) {// min�� max ������ ���� ���� ����
        return rand() % (max - min + 1) + min;
	}
	static char nextAlphabet() {//���� ���ĺ� ���� ����
        int U_L = rand() % 2;
        char c;
        if(U_L==0){
            c = rand() % 26 + 65;
        }
        else {
            c = rand() % 26 + 97;
        }

        return c;
	}
	static double nextDouble() {// 0���� ũ�ų� ���� 1���� ���� ���� �Ǽ� ����
        return rand() / (double)(RAND_MAX + 1);
	}
};

int main() {
    Random::seed();
    cout << "1���� 100���� ������ ���� 10���� ����մϴ�" << endl;

    for (int i = 0; i < 10; ++i) {
        cout << Random::nextInt(1, 100) << ' ';
    }
    cout << endl;

    cout << "���ĺ��� �����ϰ� 10���� ����մϴ�" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << Random::nextAlphabet() << ' ';
    }
    cout << endl;

    cout << "������ �Ǽ��� 10���� ����մϴ�" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << Random::nextDouble() << ' ';
    }
    cout << endl;

    for (int i = 0; i < 5; ++i) {
        cout << Random::nextDouble() << ' ';
    }
    cout << endl;

	return 0;
}