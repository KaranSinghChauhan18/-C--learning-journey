#include <iostream>
using namespace std;
int main () {
    // this is logical operator
    int a = 10, b=5;
    cout <<"the value of a is:" << a << "\n";
    cout <<"the value of b is:" << b << "\n";
    cout << " this is the value of ((a==b) && (a>=b)):" <<((a==b) && (a>=b))<<"\n";   
    cout << " this is the value of ((a>b) && (a==b)) is:" << ((a>b) || (a==b))<<"\n";
    
     return 0;
}

       