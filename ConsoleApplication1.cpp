#include <iostream>
using namespace std;

// 두 정수를 더하는 함수
int add(int a, int b) {
    return a + b;
}

int main() {
    // 함수 포인터 선언
    int (*sumFunctionPointer)(int, int);

    // 함수 포인터에 함수 할당
    sumFunctionPointer = add;

    // 함수 포인터를 사용하여 함수 호출
    int result = sumFunctionPointer(3, 4);

    // 결과 출력
    cout << "두 정수의 합: " << result << endl;

   
}