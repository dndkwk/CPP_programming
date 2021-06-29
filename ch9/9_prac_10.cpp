#include<iostream>
using namespace std;

class UI {
public:
	static int menu() {
		int num;
		cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4 >>";
		cin >> num;
		return num;
	}

	static int input() {
		int num;
		cout << "선:1, 원:2, 사각형:3 >> ";
		cin >> num;
		return num;
	}

	static int del() {
		int num;
		cout << "삭제하고자 하는 도형의 인덱스 >> ";
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
	Shape *pStart;
	Shape *pLast;
	int cnt;
public:
	GraphicEditor() {
		pStart = NULL;
		pLast = NULL;
		cnt = 0;
	}
	void run() {
		cout << "그래픽 에디터입니다."<<endl;
		int num;
		do {
			num = UI::menu();
			if (num==1) {
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
			if (cnt == 0) {
				pStart = new Line();
				pLast = pStart;
			}
			else {
				pLast = pLast->add(new Line());
			}
			cnt++;
			break;
		case 2:
			if (cnt == 0) {
				pStart = new Circle();
				pLast = pStart;
			}
			else {
				pLast = pLast->add(new Circle());
			}
			cnt++;
			break;
		case 3:
			if (cnt == 0) {
				pStart = new Rect();
				pLast = pStart;
			}
			else {
				pLast = pLast->add(new Rect());
			}
			cnt++;
			break;
		}
	
	}
	
	void del(int num) {
		Shape* start = pStart;
		Shape* temp = pStart;
		for (int i = 0; i < num; i++) {
			start = temp;
			temp = temp->getNext();
		}
		if (num == 0) {
			pStart = start->getNext();
		}
		else {
			start->setNext(temp);
		}
		cnt--;
		if (cnt == 1) pLast = pStart;
		delete temp;
	}

	void print() {
		Shape* start = pStart;
		for (int i = 0; i < cnt;i++) {
			cout << i << ": ";
			start->draw();
			start = start->getNext();
		}
	}

};


int main() {
	GraphicEditor* temp = new GraphicEditor;
	temp->run();
	delete temp;

}