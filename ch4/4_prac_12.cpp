#include<iostream>
#include<string>
using namespace std;

class Circle {
    int radius; 
    string name; 
public:
    void setCircle(string name, int radius) {
        this->name = name;
        this->radius = radius;
    }
    double getArea() {
        return this->radius * this->radius * 3.14;
    }
    string getName() {
        return this->name;
    }
};

class CircleManager {
    Circle* p; 
    int size; 
    int radius;
    string name;
public:
    CircleManager(int size) {
        p = new Circle[size];
        this->size = size;
        for (int i = 0; i < size;i++) {
            cout << "�� " << i + 1 << "�� �̸��� ������ >> ";
            cin >> name >> radius;
            p[i].setCircle(name, radius);
        }
    }
    ~CircleManager() {
        delete[] p;
    }
    void searchByName() {
        cout << "�˻��ϰ��� �ϴ� ���� �̸� >> ";
        cin >> name;
        for (int i = 0; i < size; i++) {
            if (name == p[i].getName()) {
                cout << name << "�� ������ " << p[i].getArea() << endl;
            }
        }
    }
    void searchByArea() {
        cout << "�ּ� ������ ������ �Է��ϼ��� >> ";
        cin >> radius;
        cout << radius << "���� ū ���� �˻��մϴ�.\n";
        for (int i = 0; i < size; i++) {
            if (radius < p[i].getArea()) {
                cout << p[i].getName() << "�� ������ " << p[i].getArea() << ",";
            }
        }
    }
};


int main() {
    int N;
    cout << "���� ���� >> ";
    cin >> N;
    CircleManager c(N);
    c.searchByName();
    c.searchByArea();
}