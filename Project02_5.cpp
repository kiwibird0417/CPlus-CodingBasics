//2-5. C++ 산술연산자와 auto
/*
#include <iostream>

using namespace std;

int main() {
	//1) 산술연산자
	// + : 두 개의 피연산자의 합
	// - : 첫번째 피연산자에서 두 번째 피연산자의 차
	// * : 두 개의 피연산자의 곱
	// / : 첫 번째 피연산자에서 두 번째 피연산자 나누기
	//		>> 두 개의 피연산자가 모두 정수이면, 결과값 == 몫
	// % : 첫 번째 피연산자를 두 번째 피연산자로 나눈 나머지
	//		>> 19 % 6 == 1
	//		>> 부동 소수점(실수) 사용 불가X.
	float a1 = 9.0;
	int b1 = 5;

	int a = 10;
	int b = 3;
	int c = 5;
	
	int c1 = a + b;
	int c2 = a - b;
	int c3 = a * b;
	int c4 = a / b;
	int c5 = a % b;

	cout << a << "+" << b << "=" << c1 << endl;
	cout << a << "-" << b << "=" << c2 << endl;
	cout << a << "*" << b << "=" << c3 << endl;
	cout << a << "/" << b << "=" << c4 << endl;
	cout << a << "%" << b << "=" << c5 << endl;

	//C++가 복잡한 산술 연산 수행 : 가능.
	int multiple = a / b * c;
	cout << a << "/" << b << "*" << c << "=" <<multiple << endl;

	//형변환이 일어난다.
	cout << a1 / b1 << endl;

	//==========================================
	//2) auto
	//자동으로 타입을 C++가 할당해줌.
	//맹신하면 안 됨, 복잡한 변수를 다룰 때는 사용하면 좋다.

	auto n = 100;		//n은 int
	auto x = 1.6;		//x는 float
	auto y = 1.3e12L;	//y는 long long


	return 0;
}
*/