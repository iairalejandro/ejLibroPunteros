#include <iostream>

using namespace std;

int main() {
    char c;
    short s;
    int i;
    long l;
    long long ll;
    float f;
    double d;
    long double ld;
    int array[20];
    int* ptr{array};

    cout << "sizeof c = " << sizeof c << "\tsizeof(char) = " << sizeof(char)
        << "\nsizeof s = " << sizeof s << "\tsizeof(short) = " << sizeof(short)
        << "\nsizeof i = " << sizeof i << "\tsizeof(short) = " << sizeof(int)
        << "\nsizeof l = " << sizeof l << "\tsizeof(short) = " << sizeof(long)
        << "\nsizeof ll = " << sizeof ll << "\tsizeof(short) = " << sizeof(long long)
        << "\nsizeof f = " << sizeof f << "\tsizeof(short) = " << sizeof(float)
        << "\nsizeof d = " << sizeof d << "\tsizeof(short) = " << sizeof(double)
        << "\nsizeof ld = " << sizeof ld << "\tsizeof(short) = " << sizeof(long double)
        << "\nsizeof array = " << sizeof array
        << "\nsizeof ptr = " << sizeof ptr << endl;
}