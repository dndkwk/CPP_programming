#include<iostream>
#include<string>
using namespace std;

class Console {
public:
	int menu(){
		int num;
		cout << "\n����:1, ���:2, ����:3, ������:4 >>";
		cin >> num;
		return num;
	}

	int time() {
		int num;
		cout << "7��:1, 12��:2, 17��:3 >>";
		cin >> num;
		return num;
	}
};

class Seat {
	string name;
	int num;
public:
	Seat() {
		this->name = "---"; this->num = -1;
	}
	void setName(string name) {
		this->name = name;
	}
	string getName() {
		return name;
	}

};

class Schedule {
	Seat* seat;
public:
	Schedule() {
		seat = new Seat[8];
	}
	void show(int num) {
		if (num == 0) cout << "7��:";
		else if (num == 1) cout << "12��:";
		else if (num == 2) cout << "17��:";

		for (int i = 0; i < 8; i++)
			cout << "   " << seat[i].getName();
		cout << endl;
	}
	void reserve(int num, string name) {
		seat[num - 1].setName(name);
	}
	string getName(int num) {
		return seat[num - 1].getName();
	}
	~Schedule() {
		delete[] seat;
	}
};

class AirlineBook {
	Schedule* schedule;
public:
	AirlineBook() {
		schedule = new Schedule[3];
	}

	void start() {
		int num;
		int time;
		int seat_num;
		string name;
		Console con;
		do {
			num = con.menu();
			if (num == 1) {
				time = con.time();
				schedule[time - 1].show(time - 1);
				cout << "�¼� ��ȣ>>";
				cin >> seat_num;
				cout << "�̸� �Է�>>";
				cin >> name;
				schedule[time - 1].reserve(seat_num, name);
			}
			else if (num == 2) {
				time = con.time();
				schedule[time - 1].show(time - 1);
				cout << "�¼� ��ȣ>>";
				cin >> seat_num;
				cout << "�̸� �Է�>>";
				cin >> name;
				if (name == schedule[time - 1].getName(seat_num)) {
					schedule[time - 1].reserve(seat_num, "---");
				}
				else {
					cout << "�ش�Ǵ� �����ڰ� �������� �ʽ��ϴ�." << endl;
				}
			}
			else if (num == 3) {
				schedule[0].show(0);
				schedule[1].show(1);
				schedule[2].show(2);

			}
			else if (num == 4) {
				cout << "���� �ý����� �����մϴ�." << endl;
				break;
			}
		} while (true);
	}

	~AirlineBook() {
		delete[] schedule;
	}
};



int main(void) {
	AirlineBook *temp = new AirlineBook();
	cout << "*** �Ѽ��Ѱ��� ���Ű��� ȯ���մϴ�. ***\n";
	temp->start();

}