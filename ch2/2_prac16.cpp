#include <iostream>
#include <cstring>
using namespace std;

int alphacnt=0;
char buf[100000];
int cnt;
int main() {
	

	cout << "���� �ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�." << endl;
	cout << "�ؽ�Ʈ�� ���� ; �Դϴ�. 10000������ �����մϴ�." << endl;
	
	cin.getline(buf,10000,';');//�Է�

	for (int i = 0; i <= strlen(buf); i++)
	{
		if (isalpha(buf[i]) != 0)//���ĺ����� Ȯ��
		{
			buf[i] = tolower(buf[i]);//�빮�ڸ� �ҹ��ڷ�
			alphacnt++;
		}
	}
	
	cout << "�� ���ĺ� �� " << alphacnt << endl;

	for (char c = 'a'; c <= 'z'; c++) {
		for (int i = 0; i <= strlen(buf); i++) {
			if (buf[i] == c) { //���� ��
				cnt++;//���� ����
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
		cnt = 0;//�ʱ�ȭ
	}



	return 0;
}