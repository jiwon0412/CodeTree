#include<iostream>

using namespace std;

int main() {
    // 변수 선언
    int n;

	// 입력
	cin >> n;
    
    // 출력
    cout << n << endl;
	if(n < 0)
		cout << "minus";
    return 0;
}
