#include<iostream>
using namespace std;

class Tower {
    int height;
public:
    Tower() {
        height = 1;//�Ű����� ���� ������
    };
    Tower(int h) {
        height = h;//�Ű����� �ִ� ������
    };
    int getHeight() {
        return height;//���� ��ȯ
    };
};


int main() {
    Tower myTower;
    Tower seoulTower(100);
    cout << "���̴� " << myTower.getHeight() << "����" << endl;
    cout << "���̴� " << seoulTower.getHeight() << "����";;
}