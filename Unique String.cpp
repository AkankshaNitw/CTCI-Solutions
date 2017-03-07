#include <iostream>

using namespace std;

int main()
{
    string myString;
    bool loopOut = false;
    cout<<"Enter your string:\n";
    cin>>myString;

    for(int i=0; i<myString.length(); i++)
    {
        for(int j=i+1; j<myString.length(); j++)
        {
            if(myString[i] == myString[j])
            {
                cout<<"String is not unique\n";
                return 0;
            }
        }
    }

    cout<<"String is unique\n";
    return 0;
}
