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
            //홀수이면 다시 랜덤값을 받는다.
            temp = rand();
        }
        return temp;
    }
    int nextInRange(int a,int b) {
        int temp= rand() % (b - a + 1) + a;
        while (temp % 2 == 0) {
            //짝수이면 다시 랜덤값을 받는다.
            temp = rand() % (b - a + 1) + a;
        }

        return temp;
    }

};

int main() {
    Random r;

    cout << "-- 0에서 " << RAND_MAX << "까지의 짝수 랜덤 정수 10 개--" << endl;
    for (int i = 0; i < 10; i++) {
        int n = r.next(); // 0에서 RAND_MAX(32767) 사이의 랜덤한 정수
        cout << n << ' ';
    }

    cout << endl << endl << "-- 2에서 " << "9 까지의 랜덤 홀수 정수 10 개 --" << endl;
    for (int i = 0; i < 10; i++) {
        int n = r.nextInRange(2, 9); // 2에서 4 사이의 랜덤한 정수
        cout << n << ' ';
    }

}