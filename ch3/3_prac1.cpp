#include<iostream>
using namespace std;

class Tower {
    int height;
public:
    Tower() {
        height = 1;//매개변수 없는 생성자
    };
    Tower(int h) {
        height = h;//매개변수 있는 생성자
    };
    int getHeight() {
        return height;//높이 반환
    };
};


int main() {
    Tower myTower;
    Tower seoulTower(100);
    cout << "높이는 " << myTower.getHeight() << "미터" << endl;
    cout << "높이는 " << seoulTower.getHeight() << "미터";;
}