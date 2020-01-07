#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,0};
    int n=sizeof(a)/sizeof(a[0]);

    int x;
    cout<<"Enter the value to search: ";
    cin>>x;

    //binary_search(start address, end address, element to search)
    //It returns boolean(true or false)
    //start address of an array, end address of an array
    if(binary_search(a,a+10,x))
    {
        cout<<"Element is found";
    }
    else
    {
        cout<<"Element is not found";
    }

    return 0;
}
