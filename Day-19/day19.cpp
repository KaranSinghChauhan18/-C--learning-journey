#include<iostream>
using namespace std;
// int sum (int a , int b ) {
//     cout<<"using functions with 2 arguments \n";
//     return a+b;
// }
// int sum (int a , int b, int c ) {
//     cout<<"using functions with 3 arguments \n";
//     return a+b +c;
// }

int area ( int side) {
    cout<<"using  sides is \n";
    return side * side ;
}

int area ( int length , int breath) {
    cout<<"using length and breath is\n";
    return length * breath ;
}

int main() {
    cout<<"the area of square of 15  "<< area(15)<<endl;
    cout<<"the  area of rectangle of 15 and 82   "<< area(15,82)<<endl;
    // cout<<"the sum of 15 and 82 is "<< sum(15,82)<<endl;
    // cout<<"the sum of 15 and 82  and 24 is "<< sum(15,82,24)<<endl;


    return 0;
 }