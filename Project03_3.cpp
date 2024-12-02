//3-3. 구조체
/*
#include <iostream>

using namespace std;

int main() {
	//구조체 : 다른 데이터형이 허용되는 데이터의 집합
	//cf) 배열 : 같은 데이터형의 집합

	//축구선수 데이터
	struct MyStruct {
		string name;
		string position;
		int height;
		int weight;
	} C, D;

	//1. 초기화 선언
	MyStruct A;
	A.name = "Son";
	A.position = "Striker";
	A.height = 183;
	A.weight = 77;

	//2. 초기화 선언
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

	//3. 위에 선언하게 되면, 다시 초기화 선언이 가능.
	C.height = 156;

	D = {

	};

	//다 0으로 출력됨.
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