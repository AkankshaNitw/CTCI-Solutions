#include <iostream>

using namespace std;

int main()
{
    int flag[128] = {0};
    bool isPermutation = true;
    string myString1, myString2;
    cout<<"Enter the first string.\n";
    cin>>myString1;
    cout<<"Enter the second string.\n";
    cin>>myString2;

    if(myString1.length()!= myString2.length())
    {
        cout<<"It is not a permutation.\n";
        return 0;
    }

    for(int i=0; i<myString1.length(); i++)
    {
        flag[myString1[i]]++;
    }

     for(int i=0; i<myString2.length(); i++)
    {
        flag[myString2[i]]--;
        if(flag[myString2[i]]<0)
        {
            cout<<"It is not a permutation.\n";
            return 0;
        }
    }


    cout<<"It is a permutation.\n";
    return 0;
}
