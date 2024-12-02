//3-7-2. 포인터 연산(동적 구조체)
/*
#include <iostream>

using namespace std;

struct MyStruct {
	char name[20];
	int age;
};

int main() {
	//동적 구조체 생성
	//temp* ps = new temp;


	MyStruct* temp = new MyStruct;
	cout << "당신의 이름을 입력하십시오\n";
	cin >> temp->name;

	cout << "당신의 나이를 입력하십시오\n";
	cin >> (*temp).age;

	cout << "안녕하세요! " << temp->name << "씨!\n";
	cout << "당신은 " << temp->age << "살이군요!";

	return 0;
}
*/