#include <iostream>
using namespace std;

class Dept {
    int size; // scores 배열의 크기 
    int* scores; // 동적 할당 받을 정수 배열의 주소 
public:
    Dept(int size) { // 생성자 
        this->size = size;
        scores = new int[size];
    }
    Dept(const Dept& dept) {
        this->size = dept.size;
        this->scores = new int[dept.size];
        for (int i = 0; i < dept.size;i++) {
            this->scores[i] = dept.scores[i];
        }

    } 
    ~Dept() {
        delete[] scores;
    }
    int getSize() {
        return size; 
    }
    void read() {
        cout << this->size << "개 점수 입력>> ";
        for (int i = 0; i < this->size;i++) {
            cin >> scores[i];
        }
    }
    bool isOver60(int index) {
        if (scores[index]>60) {
            return true;
        }
        else {
            return false;
        }
    }
};

int countPass(Dept& dept) { 
    int count = 0;
    for (int i = 0; i < dept.getSize(); i++) {
        if (dept.isOver60(i)) count++;
    }
    return count;
}

int main() {
    Dept com(10);
    com.read();
    int n = countPass(com);
    cout << "60점 이상은 " << n << "명";
}

