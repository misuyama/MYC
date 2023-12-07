
#include <iostream>
using namespace std;

class member {
private:
	char* name;
	int age;
public :
	member(char* name, int age);
	~member();  //소멸자 : 동적할당을 풀어주기 위해서
	member(const member& rhs);
	void changename(const char* name);
	void print();
};

member::member(const char* name, int age) {
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
	this->age = age;
}

member::~member() {
	delete[] name;
}

//복사 생성자
member::member(const member& rhs) {    //복사하는 부분
	this->name = new char[strlen(rhs.name) + 1];
	strcpy_s(this->name, strlen(rhs.name) + 1, rhs.name);
}

void member::changename(const char* name) {  //문자열 받으려면  const 쓰기
	delete[] this->name;
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);

}

void member::print() {
	cout << "name : " << name << "age : " << age << endl;
}

int main()
{
	member m1("소롱", 20);
	member m2("봉수", 19);
	member m3(m1);

	m1.print();
	m2.print();
	m3.print();

	m2.


}

