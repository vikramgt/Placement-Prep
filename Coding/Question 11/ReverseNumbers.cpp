#include <iostream>
#include<string>
using namespace std;

void reverse(string number){
    cout<<"Numbers is: "<<number<<endl;
    cout<<"Reversed numbers is: ";
    for(int i=number.length();i>=0;i--){
        cout<<number[i];
    }
}
int main()
{
    string num="1 2 3 4";
    reverse(num);
}

