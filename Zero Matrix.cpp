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
    int arr2 [m][n];
    int row[m] = {0};
    int col[n] = {0};

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            arr2[i][j] = 10000;
        }
    }

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
                if(row[i]==0)
                {
                    row[i] = 1;
                    for(int p=0; p<n; p++)
                    {
                        arr2[i][p] = 0;
                    }
                }

                if(col[j]==0)
                {
                    col[j] = 1;
                    for(int q=0; q<m; q++)
                    {
                        arr2[q][j] = 0;
                    }
                }
            }
        }
    }

    cout<<"Array after processing.\n";

     for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arr2[i][j]!=0)
            {
                arr2[i][j] = arr[i][j];
            }
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
