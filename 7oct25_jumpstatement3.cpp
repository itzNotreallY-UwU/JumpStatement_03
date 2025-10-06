//Programmer: Irfan Aiman Bin Zuraidi | Jump statement 3.0
#include <iostream>
using namespace std;

int main() {
    int i;
    cout<<" Enter a non-zero value: "; 
    cin>>i;
    if(i)
    {
        cout<<" Valid input.\n";
    }
    else 
    {
        cout<<" ERROR!";
        exit(0);
    }
    cout<<" The input was : "<<i;
}
