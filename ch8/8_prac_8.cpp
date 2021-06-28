#include<iostream>
using namespace std;

class Printer {
    string model;
    string manufacturer;
    int printedCount;
    int availableCount;
protected:
    Printer(string model, string manufacturer, int availableCount) {
        this->model = model;
        this->manufacturer = manufacturer;
        this->availableCount = availableCount;
    }
    bool print(int pages) {
        if (availableCount < pages) {
            cout << "용지가 부족하여 프린트 할 수 없습니다.\n";
            return false;
        }
        for (int i = 0; i < pages; i++) {
            this->availableCount--;
        }
        return true;
    }
    string get_model() { return model; }
    string get_manufacturer() { return this->manufacturer; }
    int get_availableCount() { return this->availableCount; }
};

class Ink : public Printer {
    int availableInk;
public:
    Ink(string model, string manufacturer, int availableCount, int availableInk) : Printer(model, manufacturer, availableCount) {
        this->availableInk = availableInk;
    }
    bool printInkJet(int pages) {
        if (!print(pages)) {
            return false;
        }
        if (this->availableInk < pages) {
            cout << "잉크가 부족하여 프린트 할 수 없습니다.\n";
            return false;
        }
        for (int i = 0; i < pages; i++) {
            this->availableInk--;
        }
        return true;
    }
    void show() {
        cout << get_model() << " ," << get_manufacturer() << " ,남은 종이 " << get_availableCount() << "장 ,남은 잉크 " << this->availableInk << endl;
    }
};

class Laser : public Printer {
    int availableToner;
public:
   Laser(string model, string manufacturer, int availableCount, int availableToner) : Printer(model, manufacturer, availableCount) {
        this->availableToner = availableToner;
    }
    bool printLaser(int pages) {
        if (!print(pages)) {
            return false;
        }
        if (this->availableToner < pages) {
            cout << "토너가 부족하여 프린트 할 수 없습니다.\n";
            return false;
        }
        for (int i = 0; i < pages; i++)
            this->availableToner--;
        return true;
    }
    void show() {
        cout << get_model() << " ," << get_manufacturer() << " ,남은 종이 " << get_availableCount() << "장 ,남은토너 " << this->availableToner << endl;
    }
};

int main(void) {
    int num, pages;
    char check;
    Ink* ink = new Ink("Officejet V40", "HP", 5, 10);
    Laser* laser = new Laser("SCX-6x45", "삼성전자", 3, 20);

    cout << "현재 작동중인 2 대의 프린터는 아래와 같다" << endl;;
    cout << "잉크젯 : ";
    ink->show();
    cout << "레이저 : ";
    laser->show();

    cout << endl;
    do {
        cout << "프린터(1:잉크젯, 2:레이저)와 매수 입력>>";
        cin >> num >> pages;
        if (num == 1) {
            if (ink->printInkJet(pages))
                cout << "프린트 하였습니다.\n";
        }
        else if (num == 2) {
            if (laser->printLaser(pages))
                cout << "프린트 하였습니다.\n";
        }
        ink->show();
        laser->show();
        cout << "계속 프린트 하시겠습니까(y/n)>>";
        cin >> check;
        if (check=='n') {
            break;
        }
        cout << endl;

    } while (true);


    delete ink;
    delete laser;
}