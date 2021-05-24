//bubble sort
#include<iostream>
using namespace std;
int main()
{
    int x, arr[50], y, temp, n;
    
cout<<"Enter the Size of Array: ";
cin>>n;
cout<<"Enter "<<n<<" Array Elements: ";
    
    for(x=0; x<n; x++)
        cin>>arr[x];
    cout<<endl;
    for(x=0; x<(n-1); x++)
    {
        for(y=0; y<(n-x-1); y++)
        {
            if(arr[y]>arr[y+1])
            {
                temp = arr[y];
                arr[y] = arr[y+1];
                arr[y+1] = temp;
            }
        }
        cout<<"Pass "<<x+1<<": ";
        for(y=0; y<n; y++)
            cout<<arr[y]<<" ";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}