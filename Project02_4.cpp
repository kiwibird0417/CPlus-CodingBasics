//2-4. const 제한자와 데이터형 변환
/*
#include <iostream>
//C : #define PIE 3.1415926535

using namespace std;

int main() {
	//1) 상수 선언하기
	// - 바뀔 필요가 없는 수
	// - 바뀌어서는 안 되는 수
	
	//원의 넓이를 구하는 프로그램
	//반지름 * 반지름 * 파이

	const float PIE = 3.1415926535;

	int r = 3;
	float s = r * r * PIE;

	cout << s << endl;

	//=============================================
	//2) 데이터형 변환
	//1. 특정 데이터형의 변수에 다른 데이터형의 값을 대입했을 때
	//2. 수식에 데이터형을 혼합하여 사용했을 때
	//3. 함수에 매개변수를 전달할 때;

	int a = 3.141592;	//정수형 값인 3만 출력됨.
	cout << a << endl;

	//강제적으로 데이터형 변환
	//typeName(a), (typeName)a
	char ch = 'M';
	cout << (int)ch << " " << int(ch) << " " << static_cast<int>(ch) << endl;

	//C++
	//static_cast<typeName>

	return 0;
}
*/
