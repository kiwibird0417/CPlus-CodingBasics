//3-1. �迭�� ���ڿ�
/*
#include <iostream>

using namespace std;

//C++�� ���յ��������� �����Ѵ�.
//	>> ����� ���Ǵ�� ���ο� �������� ���� �� ����.
//���յ������� : �⺻ ������(char == ������)�� �ε��Ҽ������� ����

int main() {
	//1) �迭
	//�迭(array) : ���� ���������� ����
	//typeName arrayName[arraySize];

	//short month[12] = { 1, 2, 3 };	//����
	short month[] = { 1, 2, 3 };	//�ڵ����� �ʱ�ȭ ����� ������.
	cout << month[2] << endl;

	//***�迭 ��Ģ***
	//�迭 ���ҿ� ������ ��, �޸��� �����ؼ� �߰�ȣ ����
	//�ʱ�ȭ ���� ���� ���߿� �� �� X
	//�迭�� �ٸ� �迭 ��°�� ���� X
	//�ʱ�ȭ �� ����, �迭 ���� �������� ��� ok
	//�迭 �κ������� �ʱ�ȭ�ϸ�, ������ ���� ��� 0
	//ù��° 0���� �ʱ�ȭ, ������ ��� 0���� �ʱ�ȭ
	//�迭 �ʱ�ȭ�� �� ���ȣ ����θ� �����Ϸ��� �ʱ�ȭ �� ���� ��Ʒ� ���� ���� ����.

	//=====================================================
	//2) ���ڿ�
	// - ������ ��.
	char a[] = { 'H', 'e', 'l', 'l', 'o', '\0'};
	char b[] = " World";

	cout << a;
	cout << b << endl;

	return 0;
}
*/