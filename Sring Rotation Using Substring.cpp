#include <iostream>

using namespace std;

bool isSubstring(string str1, string str2)
{
    int j;
    for(int i=0; i<str1.length(); i++)
    {
        j=0;
        if(str1[i]==str2[j])
        {
            while(str1[i]==str2[j] && j<str2.length())
            {
                i++;
                j++;
            }

            if(j==str2.length())
            {
                return true;
            }
        }

    }
    return false;
}

int main()
{
    string string1, string2, string3;
    cout<<"Enter the original string.\n";
    cin>>string1;
    cout<<"Enter the rotated string.\n";
    cin>>string2;
    string3 = string2+string2;

    bool result = isSubstring(string3, string1);
    if(result)
        cout<<"Is a rotated string.\n";
    else
        cout<<"Is not a rotated string.\n";
    return 0;
}
