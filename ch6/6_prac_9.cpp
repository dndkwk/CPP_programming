#include <iostream>
#include <string>
using namespace std;

class Board {
    static int cnt;
    static string *arr;
public:
    static void add(string s) {
        arr[cnt] = s;
        cnt++;
    }
    static void print() {
        cout << "********** �Խ����Դϴ�. **********" << endl;
        for (int i = 0; i < cnt; ++i) {
            cout << i << ": " << arr[i] << endl;
        }
    }
};

string* Board::arr = new string[1000];
int Board::cnt = 0;

int main() {
    // Board myBoard; // ��ü ������ ������ �����Դϴ�.


    Board::add("�߰����� ���� ���� ���� �����Դϴ�.");
    Board::add("�ڵ� ����� ���� �̿��� �ּ���.");
    Board::print();
    Board::add("���Ҹ� �л��� ������ȸ �Ի��Ͽ����ϴ�. �������ּ���");
    Board::print();
}
