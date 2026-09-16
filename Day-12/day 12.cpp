#include <iostream>
using namespace std;
int main() {
    int x = 10;
    int *p = &x;

*p = 100;

cout << "the adress at x is"<< &x<<"\n" ;
cout << "the adress at p is"<< p<<"\n" ;
cout << "the value at *p is"<< x<<"\n" ;
cout << "the value of p  is"<< *p<<"\n" ;
    return 0;
}