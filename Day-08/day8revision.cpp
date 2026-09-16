#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    const int a = 20;
    int b = 7;
     cout<<"the value of a is:"<< setw(10) << a << "\n";
     cout<<"the value of b is:"<< setw(10) << b << "\n";
     cout<<"the value of a+b*2 is:"<< setw(10) << a+b*2 << "\n";
     cout<<"the value of (a+b) *2 is:"<< setw(10) << (a+b)*2 << "\n";
     cout<<"the value of a/b is:"<< setw(10) << a/b << "\n";
     cout<<"the value of (float)a/b is:"<< setw(10) << (float)a/b << "\n";
     return 0;
}
