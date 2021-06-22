#include <iostream>
using namespace std;

class MyIntStack {
    int* p; 
    int size; 
    int tos; 
public:
    MyIntStack();
    MyIntStack(int size) {
        this->tos = 0;
        this->size = size;
        p = new int[size];
    }
    MyIntStack(const MyIntStack& s) {
        this->size = s.size;
        this->tos = s.tos;
        this->p = new int[s.size];
        for (int i = 0; i <= s.tos;i++) {
            this->p[i] = s.p[i];
        }
    }

    ~MyIntStack() {
        delete[] p;
    }
    bool push(int n) {
        if (this->tos > this->size) {
            return false;
        }
        else {
            p[this->tos] = n;
            tos++;
            return true;
        }
    }
    bool pop(int& n) {
        if (this->tos <0) {
            return false;
        }
        else {
            tos--;
            n=p[this->tos];
            return true;
        }
    }
};

int main() {
    MyIntStack a(10);
    a.push(10);
    a.push(20);
    MyIntStack b = a; 
    b.push(30);

    int n;
    a.pop(n); 
    cout << "스택 a에서 팝한 값 " << n << endl;
    b.pop(n); 
    cout << "스택 b에서 팝한 값 " << n << endl;
}