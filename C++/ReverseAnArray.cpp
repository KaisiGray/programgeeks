#include<iostream>

using namespace std;

int main()

{

    int arr[100], size, i, j, temp;

    cout<<"Enter the Size for Array: ";

    cin>>size;

    cout<<"Enter "<<size<<" Array Elements: ";

    for(i=0; i<size; i++)

        cin>>arr[i];

    cout<<"\nThe Original Array is:\n";

    for(i=0; i<size; i++)

        cout<<arr[i]<<" ";

    j = size-1;

    for(i=0; i<j; i++, j--)

    {

        temp = arr[i];

        arr[i] = arr[j];

        arr[j] = temp;

    }

    cout<<"\n\nThe Reverse of Given Array is:\n";

    for(i=0; i<size; i++)

        cout<<arr[i]<<" ";

    cout<<endl;

    return 0;

}
