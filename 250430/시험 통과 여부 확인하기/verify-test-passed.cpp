#include <iostream>

using namespace std;

int main() {
    // 변수 선언
    int n;

	// 입력
	cin >> n;
    
    // 출력
    if(n >= 80)
		cout << "pass";
	else
		cout << 80 - n << " more score";
    return 0;
}
