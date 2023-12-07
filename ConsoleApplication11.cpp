#include <iostream>
#include <random>


#define CNT 100

using namespace std;

class point {
private:
    int x, y;

public:
    point() : x(0), y(0) {}

    point(int x, int y) {
        this->x = x;
        this->y = y;
    }

    double distance(point other) {
        return sqrt((other.x - this->x) * (other.x - this->x) + (other.y - this->y) * (other.y - this->y));
    }

    void setx(int x) { this->x = x; }
    void sety(int y) { this->y = y; }
    int getx() const { return x; }
    int gety() const { return y; }
};

int main() {
    point pnt[CNT];

    random_device rd;
    mt19937 mt(rd());
    uniform_int_distribution<int> dist(0, 999);

    for (int i = 0; i < CNT; i++) {
        pnt[i].setx(dist(mt));
        pnt[i].sety(dist(mt));
    }

    for (int i = 0; i < CNT; i++)
        cout << "pnt[" << i << "] = (" << pnt[i].getx() << ", " << pnt[i].gety() << ")" << endl;

    double min = numeric_limits<double>::max();  // Initialize min to a large value
    int min_i, min_j;

    // find closest pair
    for (int i = 0; i < CNT; i++)
        for (int j = i + 1; j < CNT; j++)
            if (pnt[i].distance(pnt[j]) < min) {
                min_i = i;
                min_j = j;
                min = pnt[i].distance(pnt[j]);
            }

    cout << "최근접 점의 쌍 = [" << min_i << "]-[" << min_j << "] = " << min << endl;
}