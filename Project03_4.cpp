//3-4. ����ü�� ����ü
/*
#include <iostream>

using namespace std;

int main() {
	//1) ����ü(union)
	//���� �ٸ� ���������� �� ���� �� ������ ���� ����.

	union MyUnion {
		int intVal;
		long longVal;
		float floatVal;
	};

	MyUnion test;

	test.intVal = 3;
	cout << test.intVal << endl;

	test.longVal = 33;
	cout << test.longVal << endl;

	test.floatVal = 3.3;
	cout << test.floatVal << endl;

	//�� ���� �� Ÿ�Ը� ����� �� �־, ������ �߻��ϰ� �Ǵ� ����.
	cout << test.intVal << endl;
	cout << test.longVal << endl;
	cout << test.floatVal << endl;
	//=========================================
	//2) ����ü(enum)
	//��ȣ ����� ����� �Ϳ� ���� �Ǵٸ� ���

	enum spectrum {red, orange, yellow, green, 
		blue, violet, indigo, ultraviolet};

	// ***Ư¡***
	// - spectrum�� ���ο� �������� �̸����� ����.
	// - red, orange, yellow.. 0�������� 7���� ���� ���� ��Ÿ���� ��ȣ ����� ����
	// - ������ �� ��.
	// - �ʱ�ȭ�� ������ ������, �� ���� �����ڴ� +1�� ���� ������ ��.
	enum spectrum2 {
		red = 0, orange = 2, yellow= 4, green,
		blue, violet, indigo, ultraviolet
	};

	spectrum a = orange;
	cout << a << endl;

	//spectrum b = orange + yellow;	//����
	int b;
	b = blue;
	b = blue + 3;
	cout << b << endl;


	return 0;
}
*/