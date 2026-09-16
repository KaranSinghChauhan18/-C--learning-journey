#include<iostream> 
using namespace std;
int main() {
    int arr[] = { 5,10,15,20,25};
    int *p = arr;
    cout<< p<<"\n";
    cout<< *p <<"\n";
    cout<< *(p+2)<<"\n";
    cout<< *(p+4)<<"\n";
    
    
    cout<<"these are the value of marks\n";
    // cout<<"the value of marks o is" << marks[0] <<"\n";
    // cout<<"the value of marks 1 is" << marks[1] <<"\n";
    // cout<<"the value of marks 2 is" << marks[2] <<"\n";
    // cout<<"the value of marks 3 is" << marks[3] <<"\n";




    // for (int i = 0;  i <=4;i++)
    // {
    
    //     cout<<"the value of marks "<< i <<"is:"<< marks[i] <<"\n";
    // }

    
    return 0;
}
