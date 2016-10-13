#include <cstdint>

#include <iostream>
#include <string>

#define max(x, y) x > y ? x : y;

class point {
    public:
        point(float, float);
        point operator+(const point &p);
    private:
        float x, y;

    friend int main(int argc, char *argv[]);
};

point::point(float x, float y) : x(x), y(y) { }

point point::operator+(const point &p) {
    return {x + p.x, y + p.y};
}

int main(int argc, char *argv[]) {
    std::cout << "Compiler Version " << __cplusplus << std::endl;
    std::cout << "Hello World" << std::endl;

    point p = {1, 1};
    point p2 = {2, 2};

    point p3 = p + p2;

    std::cout << "X : " << p3.x << " Y : " << p3.y << std::endl;
    return 0;
}
