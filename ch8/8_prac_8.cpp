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
            cout << "������ �����Ͽ� ����Ʈ �� �� �����ϴ�.\n";
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
            cout << "��ũ�� �����Ͽ� ����Ʈ �� �� �����ϴ�.\n";
            return false;
        }
        for (int i = 0; i < pages; i++) {
            this->availableInk--;
        }
        return true;
    }
    void show() {
        cout << get_model() << " ," << get_manufacturer() << " ,���� ���� " << get_availableCount() << "�� ,���� ��ũ " << this->availableInk << endl;
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
            cout << "��ʰ� �����Ͽ� ����Ʈ �� �� �����ϴ�.\n";
            return false;
        }
        for (int i = 0; i < pages; i++)
            this->availableToner--;
        return true;
    }
    void show() {
        cout << get_model() << " ," << get_manufacturer() << " ,���� ���� " << get_availableCount() << "�� ,������� " << this->availableToner << endl;
    }
};

int main(void) {
    int num, pages;
    char check;
    Ink* ink = new Ink("Officejet V40", "HP", 5, 10);
    Laser* laser = new Laser("SCX-6x45", "�Ｚ����", 3, 20);

    cout << "���� �۵����� 2 ���� �����ʹ� �Ʒ��� ����" << endl;;
    cout << "��ũ�� : ";
    ink->show();
    cout << "������ : ";
    laser->show();

    cout << endl;
    do {
        cout << "������(1:��ũ��, 2:������)�� �ż� �Է�>>";
        cin >> num >> pages;
        if (num == 1) {
            if (ink->printInkJet(pages))
                cout << "����Ʈ �Ͽ����ϴ�.\n";
        }
        else if (num == 2) {
            if (laser->printLaser(pages))
                cout << "����Ʈ �Ͽ����ϴ�.\n";
        }
        ink->show();
        laser->show();
        cout << "��� ����Ʈ �Ͻðڽ��ϱ�(y/n)>>";
        cin >> check;
        if (check=='n') {
            break;
        }
        cout << endl;

    } while (true);


    delete ink;
    delete laser;
}