#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char ch[100];
 
	while (true) {
		cout << "�����ϰ������ yes�� �Է��ϼ���>>";
		cin.getline(ch,100);//100���ڱ��� �Է�
		if(strcmp(ch,"yes")==0){//��ġ�ϸ� break
			break;
		}
	}
	cout << "�����մϴ�...";

	return 0;
}