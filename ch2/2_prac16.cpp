#include <iostream>
#include <cstring>
using namespace std;

int alphacnt=0;
char buf[100000];
int cnt;
int main() {
	

	cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다." << endl;
	cout << "텍스트의 끝은 ; 입니다. 10000개까지 가능합니다." << endl;
	
	cin.getline(buf,10000,';');//입력

	for (int i = 0; i <= strlen(buf); i++)
	{
		if (isalpha(buf[i]) != 0)//알파벳인지 확인
		{
			buf[i] = tolower(buf[i]);//대문자를 소문자로
			alphacnt++;
		}
	}
	
	cout << "총 알파벳 수 " << alphacnt << endl;

	for (char c = 'a'; c <= 'z'; c++) {
		for (int i = 0; i <= strlen(buf); i++) {
			if (buf[i] == c) { //문자 비교
				cnt++;//개수 증가
			}
		}

		if (cnt >= 10) {
			cout << c << "(" << cnt << ")" << "  : ";
		}
		else {
			cout << c << "(" << cnt << ")" << "   : ";
		}
		
		for (int i = 0; i <cnt; i++) {
			cout << "*";
		}
		cout << endl;
		cnt = 0;//초기화
	}



	return 0;
}