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
		cout << "첫번째 선수 이름>>";
		cin >> name;
		p[0].setname(name);
		cout << "두번째 선수 이름>>";
		cin >> name;
		p[1].setname(name);
	}

	bool ran() {
		int num[3];
		cout << "\t\t";
		for (int i = 0; i < 3;i++) {
			num[i] = rand() % 3; //3이하
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
				cout << m + "님 승리!!";
				break;
			}
			else {
				cout << "아쉽군요" << endl;
			}
			i++;
		}
	}
};


int main() {
	cout << "***** 갬블링 게임을 시작합니다. *****\n";
	GamblingGame g;
	g.start();
	g.game();


	return 0;
}