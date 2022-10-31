//C++ program that implements binary search in Arrays

#include <iostream>

using namespace std;

int binarySearch(int [], int, int);
void exchangeSort(int [], int);
void swapNumber(int &, int &);

int main()
{
    int n[] = {1022, 182,  14, 88, 56, 79,12, 95, 108,  900};
    int sizeArray = sizeof(n) / sizeof(n[0]);
    int value;
    cout<<"Insert the value that you would search: "<<endl;
    cin>>value;
    //first we have to sort the array, if we jump this point, binary search won't be efficient
    exchangeSort(n,sizeArray);
    int result = binarySearch(n,sizeArray,value);
    cout<<result<<endl;
    if(result != -1)
        cout<<"the element is situated in the "<<result<<" position"<<endl;
    else
        cout<<"the element isn't in the array"<<endl;
    return 0;
}

// classic exchange sort algorithm
void exchangeSort(int n[], int sizeArray)
{
    for(int i = 0; i < sizeArray-1; i++)
        for(int j = i+1; j < sizeArray; j++)
           if(n[i] > n[j])
              swapNumber(n[i],n[j]);
}

//swapping number function
void swapNumber(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}

/* binary search algorithm: in sorted arrays,
 it compares the elements wanted with the one in the central position,
 according to the result it continue in one of the two sets
 (the first with the element lower than the middle one, and the second the greater ones)
 until there aren't any element to compare
 It returns the element position if it is present, if not it returns -1*/

 int binarySearch(int a[],int sizeArray, int value)
 {
     int arrayStart, arrayEnd, arrayCentre;
     int result;
    arrayStart = 0;
    arrayEnd = sizeArray-1;
    while(arrayStart <= arrayEnd)
    {
        arrayCentre = ((arrayStart + arrayEnd) / 2);
        if(a[arrayCentre] == value)
            return arrayCentre;
        if(a[arrayCentre] < value)
            arrayStart = arrayCentre + 1;
        else
            arrayEnd = arrayCentre - 1;
    }
    return -1;
 }


