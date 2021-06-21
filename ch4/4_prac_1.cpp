#include<iostream>
using namespace std;

class Rect {
    int width,height;
public:
    Rect() {
        width=1;
        height = 1;
    }
    Rect(int w,int h) {
        width = w;
        height = h;
    }
    int getWidth() {
        return this->width;
    }
    int getHeight() {
        return this->height;
    }
    int getArea() {
        return this->height * this->width;
    }

};


int main() {
    
    string a="My name is Jane";
    char ch = a[2];
    if (a=="My name is John") cout << "same";
    a+="~~";
    a[1]='Y';

}