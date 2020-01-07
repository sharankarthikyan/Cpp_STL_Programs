#include <iostream>
#include <algorithm>//this is the STL for sorting
using namespace std;

int main()
{
    int a[10]={9,5,6,2,4,3,2,7,1,8};

    sort(a, a+10);//sort(start address, end address);

    //for loop to display
    for(int i=0;i<10;i++)
    {
        cout<<i<<" ";
    }

    return 0;
}
