#include <iostream>
#include<string>
using namespace std;

void cesar(string str,int r){
    int i=0;
    for(i=0;i<str.length();i++){
        if(isalpha(str[i])){
            str[i]=str[i]+r;
        }
    }
    cout<<"After Rotation "<<str;
}
int main()
{
    int rotation;
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    cout<<"Enter number of rotation: ";
    cin>>rotation;
    cesar(str,rotation);
}

