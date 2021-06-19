#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char ch[100];
 
	while (true) {
		cout << "종료하고싶으면 yes를 입력하세요>>";
		cin.getline(ch,100);//100글자까지 입력
		if(strcmp(ch,"yes")==0){//일치하면 break
			break;
		}
	}
	cout << "종료합니다...";

	return 0;
}