#include<iostream> 
using namespace std;
 inline int add (int a , int b =10) {
    return a+b;
}
int main () {
    cout<<"the value of a+b is " <<add(5) << "\n"; 
    // int a,b;
    // cout<<"the value of a and b is \n";
    // cin>>a>>b;
    // cout<<"the value of the product of a and b is:"<<product(a,b);
    return 0;
}