#include <iostream>

using namespace std;

int main()
{
    cout << "Welcome to my programming " << endl;

    int n;
    cout<<"Enter the length of the array: "<<endl;
    cin>>n;
    int arr[n],position,element;

    //taking input from the user

    for(int i=0;i<n;i++)
    {
        cout<<"enter element of: "<<i+1<<endl;
        cin>>arr[i];
    }

    //printing the value's of array

    for(int i=0;i<n;i++)
    {
        cout<<"insert value's of"<<i<<"="<<arr[i]<<endl;
    }



    cout<<"Enter position where you want to place the element: "<<endl;
    cin>>position;
    cout<<"Enter the element: "<<endl;
    cin>>element;



    for(int i=n-1;i<=position;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[position]=element;

    //after changing the element form the array


    cout<<"After the change of element: "<<endl;
    for(int j=0;j<n;j++)
    {
        cout<<"element of: "<<j<<"="<<arr[j]<<endl;
    }

    return 0;
}
