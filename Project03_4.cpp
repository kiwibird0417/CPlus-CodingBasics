//3-4. 공용체와 열거체
/*
#include <iostream>

using namespace std;

int main() {
	//1) 공용체(union)
	//서로 다른 데이터형을 한 번에 한 가지만 보관 가능.

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

	//한 번에 한 타입만 출력할 수 있어서, 에러가 발생하게 되는 것임.
	cout << test.intVal << endl;
	cout << test.longVal << endl;
	cout << test.floatVal << endl;
	//=========================================
	//2) 열거체(enum)
	//기호 상수를 만드는 것에 대한 또다른 방법

	enum spectrum {red, orange, yellow, green, 
		blue, violet, indigo, ultraviolet};

	// ***특징***
	// - spectrum을 새로운 데이터형 이름으로 만듦.
	// - red, orange, yellow.. 0에서부터 7까지 정수 값을 나타내는 기호 상수로 만듦
	// - 연산이 안 됨.
	// - 초기화는 무조건 정수로, 그 이후 열거자는 +1의 값을 가지게 됨.
	enum spectrum2 {
		red = 0, orange = 2, yellow= 4, green,
		blue, violet, indigo, ultraviolet
	};

	spectrum a = orange;
	cout << a << endl;

	//spectrum b = orange + yellow;	//오류
	int b;
	b = blue;
	b = blue + 3;
	cout << b << endl;


	return 0;
}
*/