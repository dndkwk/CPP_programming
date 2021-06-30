#include<iostream>
using namespace std;

template<class T> 
class Container {
	T* p;
	int size;
public:
	Container(int n) {
		this->size = n;
		p = new T[this->size];
	}
	~Container() {
		delete[] p;
	};
	void set(int index, T value) {
		p[index] = value; 
	}


	T get(int index) {
		return p[index];
	}
	
};


int main() {
	Container<char> c(26);

	for (int i = 0; i < 26;i++) {
		c.set(i, 'a' + i);
	}

	for (int i = 25; i >= 0; i--) {
		cout << c.get(i) << " ";
	}

}