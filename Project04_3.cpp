//4-3. while 루프와 do while 루프
/*
#include <iostream>

using namespace std;

int main() {
	//1) while문
	string str = "Panda";

	int i = 0;
	while (str[i] != '\0') {
		cout << str[i] << endl;
		i++;
	}
	//---------------------------
	bool a = true;
	bool b = false;
	while (a) {
		//조건이 없으면, 무한히 반복
		cout << "hello\n";
		a = false;
	}

	//===========================
	//2) do while문
	//일단 반복 후, 조건을 판단.
	//최소 1회는 실행이 됨.
	bool j = false;
	do {
		cout << "do while문입니다.\n";
	} while (j);

	return 0;
}
*/