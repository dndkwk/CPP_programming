#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;


class Random {
public:
    Random() {
        srand(time(NULL));
    };
    int next() {
        int temp = rand();
        while (temp%2==1) {
            //Ȧ���̸� �ٽ� �������� �޴´�.
            temp = rand();
        }
        return temp;
    }
    int nextInRange(int a,int b) {
        int temp= rand() % (b - a + 1) + a;
        while (temp % 2 == 0) {
            //¦���̸� �ٽ� �������� �޴´�.
            temp = rand() % (b - a + 1) + a;
        }

        return temp;
    }

};

int main() {
    Random r;

    cout << "-- 0���� " << RAND_MAX << "������ ¦�� ���� ���� 10 ��--" << endl;
    for (int i = 0; i < 10; i++) {
        int n = r.next(); // 0���� RAND_MAX(32767) ������ ������ ����
        cout << n << ' ';
    }

    cout << endl << endl << "-- 2���� " << "9 ������ ���� Ȧ�� ���� 10 �� --" << endl;
    for (int i = 0; i < 10; i++) {
        int n = r.nextInRange(2, 9); // 2���� 4 ������ ������ ����
        cout << n << ' ';
    }

}