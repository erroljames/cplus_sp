//selection sorting 
#include<iostream>
using namespace std;
int main()
{
    int n, arr[50], x, y, temp, small, k, index;
    cout<<"Enter the Size of Array: ";
    cin>>n;
    cout<<"Enter "<<n<<" Array Elements: ";
    for(x=0; x<n; x++)
        cin>>arr[x];
    for(x=0; x<(n-1); x++)
    {
        k=0;
        small = arr[x];
        for(y=(x+1); y<n; y++)
        {
            if(small>arr[y])
            {
                small = arr[y];
                k++;
                index = y;
            }
        }
        if(k!=0)
        {
            temp = arr[x];
            arr[x] = small;
            arr[index] = temp;
        }
        cout<<"Pass "<<x+1<<": ";
for(y=0; y<n; y++)
    cout<<arr[y]<<" ";
cout<<endl;
    }
    cout<<"\nSorted Array is:\n";
    for(x=0; x<n; x++)
        cout<<arr[x]<<" ";
    cout<<endl;
    return 0;
}