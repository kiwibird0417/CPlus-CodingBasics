//3-3. ����ü
/*
#include <iostream>

using namespace std;

int main() {
	//����ü : �ٸ� ���������� ���Ǵ� �������� ����
	//cf) �迭 : ���� ���������� ����

	//�౸���� ������
	struct MyStruct {
		string name;
		string position;
		int height;
		int weight;
	} C, D;

	//1. �ʱ�ȭ ����
	MyStruct A;
	A.name = "Son";
	A.position = "Striker";
	A.height = 183;
	A.weight = 77;

	//2. �ʱ�ȭ ����
	MyStruct B = {
		"Son",
		"Striker",
		183,
		77
	};

	cout << A.name << endl;
	cout << A.position << endl;
	cout << A.height << endl;
	cout << A.weight << endl;

	//3. ���� �����ϰ� �Ǹ�, �ٽ� �ʱ�ȭ ������ ����.
	C.height = 156;

	D = {

	};

	//�� 0���� ��µ�.
	cout << D.name << endl;
	cout << D.position << endl;
	cout << D.height << endl;
	cout << D.weight << endl;

	//==========================================
	MyStruct E[2] = {
		{"E", "E", 1, 1},
		{"F", "F", 2, 2}
	};

	cout << E[0].name << endl;


	return 0;
}
*/