// ConsoleApplication2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

struct TV {
private:
	bool powerOn;
	int channel;
	int volume;

public:
	void on() { powerOn = true; }
	void off() { powerOn = false; }
	void setchannel(int ch) {
		if (ch >= 1 && ch <= 999)
			channel = ch;
	}
	int getchannel() { return channel; }
	void setVolume(int vol) {
		if (vol >= 0 && vol <= 100) volume = vol;
	}

};
int main()
{
	





   
}

