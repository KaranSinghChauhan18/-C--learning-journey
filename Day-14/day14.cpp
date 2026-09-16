#include<iostream>
using namespace std;
struct student
{
    int age;
    float marks;
    string name;
};
int main () {
    struct student kannu;
    kannu.age =18;
    kannu. marks = 336.7;
    kannu. name ="Karan" ;
    cout<< kannu.age<<"\n";
    cout<< kannu.marks<<"\n";
    cout<< kannu.name<<"\n";
    return 0;
}

