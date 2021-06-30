#include<iostream>
#include<vector>
using namespace std;

class UI {
public:
	static int menu() {
		int num;
		cout << "����:1, ����:2, ��κ���:3, ����:4 >>";
		cin >> num;
		return num;
	}

	static int input() {
		int num;
		cout << "��:1, ��:2, �簢��:3 >> ";
		cin >> num;
		return num;
	}

	static int del() {
		int num;
		cout << "�����ϰ��� �ϴ� ������ �ε��� >> ";
		cin >> num;
		return num;
	}

};

class Shape {
	Shape* next;
public:
	virtual void draw() = 0;
	Shape* add(Shape* sh) {
		this->next = sh;
		return sh;
	}
	Shape* getNext() {
		return next;
	}
	void setNext(Shape* sh) {
		this->next = sh->next;
	}
};

class Circle :public Shape {
public:
	virtual void draw() {
		cout << "Circle" << endl;
	}
};

class Line :public Shape {
public:
	virtual void draw() {
		cout << "Line" << endl;
	}

};

class Rect :public Shape {
public:
	virtual void draw() {
		cout << "Rect" << endl;
	}

};

class GraphicEditor {
	vector<Shape*> v;
	vector<Shape*>::iterator it;
public:
	GraphicEditor() {
	}
	void run() {
		cout << "�׷��� �������Դϴ�." << endl;
		int num;
		do {
			num = UI::menu();
			if (num == 1) {
				num = UI::input();
				create(num);
			}
			else if (num == 2) {
				num = UI::del();
				del(num);
			}
			else if (num == 3) {
				print();
			}
			else if (num == 4) {
				break;
			}
		} while (true);

	}

	void create(int num) {
		switch (num) {
		case 1:
			v.push_back(new Line());
			break;
		case 2:
			v.push_back(new Circle());
			break;
		case 3:
			v.push_back(new Rect());
			break;
		}

	}

	void del(int num) {
		it = v.begin();
		Shape* temp = *(it + num);
		v.erase(it + num);
		delete temp;
	}

	void print() {
		for (int i = 0; i < v.size();i++) {
			cout << i << ": ";
			v.at(i)->draw();
		}

	}

};


int main() {
	GraphicEditor* temp = new GraphicEditor;
	temp->run();
	delete temp;

}