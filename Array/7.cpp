
#include <iostream>
using namespace std;

int main(){
    int marks[100];
    int n;
    cout<<"Enter the no of students ";
    cin>> n;
    cout<<"enter their marks";
    // Input
    for (int i = 0; i < n; i++)
    {
        cin>>marks[i];

    }
    // Output
    for (int i = 0; i < n; i++)
    {
        cout<<2* marks[i]<<", ";

    }
    
    return 0;
}