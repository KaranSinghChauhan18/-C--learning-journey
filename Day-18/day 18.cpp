#include<iostream>
using namespace std;

    void fac(int n) 
        {
        if (n==6) 
            return ;


            cout<<n;
            fac(n+1);
        
         
    }
    int main() 
    {
        fac(1);
        // int a;
        // cout<<"enter the value of a "<<endl;
        // cin>>a;
        // cout<<"the fac of " << a << " is " << fac(a) <<endl;
    return 0;
}