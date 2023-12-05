//함수객체 13.10

#include <iostream>
using namespace std;

class Equals {
private:
    int value;
public:
    Equals(int v) : value(v) {}
    bool operator()  (int x) { // 연산자 오버로딩
        return x == value;
    }                                        //오퍼레이터가 나온다? 연산자 오버로딩 시키겠다라는 뜻
};
int main()
{
    Equals eq(123); // 객체 생성
    
    cout << eq(12) << endl;
    cout << eq(123) << endl;
}

