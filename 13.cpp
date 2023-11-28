// 13.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

class v2 {
private:
    float x, y;
public:
    v2() : x(0) ,y(0) {}
    v2(float x, float y) : x(x) , y(y) {}
    float getx() const { return x; }
    float gety() const { return y; }

    v2 operator+(const v2 other) const{
        return v2(x + other.x, y + other.y);
    }
    v2 operator-(const v2 other) const {
        return v2(x - other.x, y - other.y);
    }

    v2& operator+=(const v2 other) {
        x += other.x;
        y += other.y;
        return *this;
    }

    v2& operator-=(const v2 other) {
        x -= other.x;
        y -= other.y;
        return *this;
    }
};
template <typename T>
T getarraysum(const T arr, int n) {
    int sum = arr[0];
    for (int i = 1; i < n; i++)
        sum += arr[i];
    return sum;
};

int main()
{
    int iarr[5] = { 1,3,5,7,9 };
    double darr[7] = { 1.3,4.5,6.4,6.8,4.1,9.8,9.5 };
    v2 varr[3] = { v2(1,2) , v2(3,4) , v2(5,2) };
    string sarr[4] = { "hello" , "world" , "marry" , "christmas" };


    int isum = getarraysum<int>(iarr, 5);
    double dsum = getarraysum<double>(darr, 7);
    v2 vsum = getarraysum<string>(varr, 4);
    string ssum = getarraysum<string>(sarr, 4);

        cout << isum << endl;
        cout << dsum << endl;
        cout << "(" << vsum.getx() << "," << vsum.gety() << ")" << endl;
        cout << ssum << endl;
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
