//2-2. 정수형 자료형과 실수형 자료형

/*
#include <iostream>
#include <climits>

using namespace std;

int main() {
	//실수형 : 소수부가 있는 수
	float a1 = 3.14;
	int b1 = 3.14;

	cout << "실수형: " << a1 << " 정수형: " << b1 << endl;

	//=======================================================
	//정수형 : 소수부가 없는 수
	//음의 정수, 0, 양의 정수
	//데이터형 : short, int, long, long long

	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	cout << "int는 " << sizeof n_int << "바이트이다." << endl;
	cout << "이 바이트의 최대값은 " << n_int << " 이다." << endl;

	cout << "short은 " << sizeof n_short << "바이트이다." << endl;
	cout << "이 바이트의 최대값은 " << n_short << " 이다." << endl;

	cout << "long는 " << sizeof n_long << "바이트이다." << endl;
	cout << "이 바이트의 최대값은 " << n_long << " 이다." << endl;

	cout << "long long는 " << sizeof n_llong << "바이트이다." << endl;
	cout << "이 바이트의 최대값은 " << n_llong << " 이다." << endl;

	//=======================================================
	//unsigned: 0과 양의 정수의 범위만 가지게 됨.
	unsigned int a;
	unsigned short b;
	unsigned long c;
	unsigned long long d;

	unsigned short print_b = -1;
	cout << print_b << endl;

	//=======================================================

	return 0;
}
*/