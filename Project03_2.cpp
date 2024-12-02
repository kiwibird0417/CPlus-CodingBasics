//3-2. 사용자 입력과 string
/*
#include <iostream>
#include <cstring>	//strlen() 함수를 사용하기 위해서

using namespace std;

int main() {
	//1) 사용자 입력
	const int Size = 15;
	char name1[Size];					//비어있는 배열
	char name2[Size] = "C++programming";//문자열 상수로 초기화된 배열

	cout << "안녕하세요! 저는 " << name2;
	cout << "입니다! 성함이 어떻게 되시나요?\n";

	//cin >> name1;
	cin.getline(name1, Size);	//스페이스가 있어도 읽어올 수 있음.

	cout << "음, " << name1 << "씨, 당신의 이름은 ";
	cout << strlen(name1) << "자입니다만\n";
	cout << sizeof(name1) << "바이트 크기의 배열에 저장되었습니다.\n";
	cout << "이름이 " << name1[0] << "자로 시작하는군요.\n";

	name2[3] = '\0';	//set to null character
	cout << "제 이름의 처음 세문자는 다음과 같습니다: ";
	cout << name2 << endl;

	//===============================================
	//2) string
	// - C스타일로 string 객체 초기화 가능
	// - cin을 사용하여 string 객체에 키보드 입력 저장 가능.
	// - cout 사용하여 string 객체 디스플레이 가능
	// - 배열 표기 사용하여 string 객체에 저장되어 있는 개별적 문자 접근 가능.

	char char1[20];
	char char2[20] = "jaguar";
	string str1;
	string str2 = "panda";

	//char1 = char2;	//틀리다
	str1 = str2;		//맞다
	cout << str1 << endl;

	return 0;
}
*/