//3-2. ����� �Է°� string
/*
#include <iostream>
#include <cstring>	//strlen() �Լ��� ����ϱ� ���ؼ�

using namespace std;

int main() {
	//1) ����� �Է�
	const int Size = 15;
	char name1[Size];					//����ִ� �迭
	char name2[Size] = "C++programming";//���ڿ� ����� �ʱ�ȭ�� �迭

	cout << "�ȳ��ϼ���! ���� " << name2;
	cout << "�Դϴ�! ������ ��� �ǽó���?\n";

	//cin >> name1;
	cin.getline(name1, Size);	//�����̽��� �־ �о�� �� ����.

	cout << "��, " << name1 << "��, ����� �̸��� ";
	cout << strlen(name1) << "���Դϴٸ�\n";
	cout << sizeof(name1) << "����Ʈ ũ���� �迭�� ����Ǿ����ϴ�.\n";
	cout << "�̸��� " << name1[0] << "�ڷ� �����ϴ±���.\n";

	name2[3] = '\0';	//set to null character
	cout << "�� �̸��� ó�� �����ڴ� ������ �����ϴ�: ";
	cout << name2 << endl;

	//===============================================
	//2) string
	// - C��Ÿ�Ϸ� string ��ü �ʱ�ȭ ����
	// - cin�� ����Ͽ� string ��ü�� Ű���� �Է� ���� ����.
	// - cout ����Ͽ� string ��ü ���÷��� ����
	// - �迭 ǥ�� ����Ͽ� string ��ü�� ����Ǿ� �ִ� ������ ���� ���� ����.

	char char1[20];
	char char2[20] = "jaguar";
	string str1;
	string str2 = "panda";

	//char1 = char2;	//Ʋ����
	str1 = str2;		//�´�
	cout << str1 << endl;

	return 0;
}
*/