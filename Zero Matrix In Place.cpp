#include <iostream>

using namespace std;

int main()
{
    int m, n;
    cout << "Enter the size of the array\n";
    cout<<"Rows M: ";
    cin>>m;
    cout<<"Columns N: ";
    cin>>n;
    int arr [m][n];
    int row[m] = {0};
    int col[n] = {0};

    cout<<"Enter array elements row wise.\n";
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"Array before processing.\n";
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arr[i][j] == 0)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    for(int i=0; i<m; i++)
    {
        if(row[i]==1)
        {
            for(int j=0; j<n; j++)
            {
                arr[i][j] = 0;
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        if(col[i]==1)
        {
            for(int j=0; j<m; j++)
            {
                arr[j][i] = 0;
            }
        }
    }

    cout<<"Array after processing.\n";

     for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
