#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;

class Player {
	string name;
public:
	void setname(string name) {
		this->name = name;
	}
	string getname() {
		return this->name;
	}
};

class GamblingGame {
	Player* p = new Player[2];
public:
	GamblingGame() {
		srand(time(NULL));
	}
	~GamblingGame() {
		delete[] p;
	}
	void start() {
		string name;
		cout << "ù��° ���� �̸�>>";
		cin >> name;
		p[0].setname(name);
		cout << "�ι�° ���� �̸�>>";
		cin >> name;
		p[1].setname(name);
	}

	bool ran() {
		int num[3];
		cout << "\t\t";
		for (int i = 0; i < 3;i++) {
			num[i] = rand() % 3; //3����
			cout << num[i] << "\t";
		}
		if (num[0]==num[1] && num[1]==num[2]) {
			return true;
		}else{
			return false;
		}
	}

	void game() {
		int i = 0;
		string n;
		while (true) {
			string m = p[i % 2].getname();
			cout << m << ":\n";
			getline(cin,n);
			
			if (ran()) {
				cout << m + "�� �¸�!!";
				break;
			}
			else {
				cout << "�ƽ�����" << endl;
			}
			i++;
		}
	}
};


int main() {
	cout << "***** ���� ������ �����մϴ�. *****\n";
	GamblingGame g;
	g.start();
	g.game();


	return 0;
}