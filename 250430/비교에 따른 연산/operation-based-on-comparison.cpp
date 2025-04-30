#include <iostream>

using namespace std;

int main() {
    // 변수 선언
    int a, b;

	// 입력
	cin >> a >> b;
    
    // 출력
    if(a > b)
		cout << a * b;
	else
		cout << b / a;
    return 0;
}
