#include<iostream>
using namespace std;
int main()
{
    int i, j, arr[2][3];
    cout<<"Enter 6 numbers for array: ";
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"elements in array: \n";
    cout<<"{";
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<arr[i][j];
            cout<<",";
            if(arr[i][j]==arr[1][2])
            {
                break;
            }
            if(j==2)
            {
                cout<<"\n";
            }
        }
    }
    cout<<"}";
    return 0;
}