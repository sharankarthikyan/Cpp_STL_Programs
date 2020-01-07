#include <iostream>//For input and output
#include <algorithm>//For sort and many other algorithm
#include <vector>//For using vector
#include <numeric>//For accumulate operation

using namespace std;

int main()
{
    int n,x,i;
    cout<<"Enter number of element in vector: ";
    cin>>n;
    int arr[n];

    //Getting Values in array
    cout<<"Enter the Values in array:\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //Creating a Vector
    vector<int> vect(arr, arr+n);

    //Display the values using vector
    for(int i=0;i<n;i++)
    {
        cout<<vect[i]<<" ";
    }
    cout<<"\n";


    //sorting algorithm is used
    sort(vect.begin(),vect.end());
    //Display the values after sorting using vector
    cout<<"After sorting: ";
    for(int i=0;i<n;i++)
    {
        cout<<vect[i]<<" ";
    }
    cout<<"\n";

    reverse(vect.begin(),vect.end());
    //Display the values after reversing using vector
    cout<<"After Reversing: ";
    for(int i=0;i<n;i++)
    {
        cout<<vect[i]<<" ";
    }
    cout<<"\n";

    //Maximum element of vector
    cout<<"Maximum element of vector is: "<< *max_element(vect.begin(),vect.end())<<endl;
    //Minimum element of vector
    cout<<"Minimum element of vector is: "<< *min_element(vect.begin(),vect.end())<<endl;

    //accumulate means add
    //accumulate(start address, end address, initial value of sum);
    int sum=accumulate(vect.begin(),vect.end(),0);
    cout<<"sum="<<sum<<endl;


    //count occurrence of number in vector
    //count(start address, end address, number to find occurrence)
    cout<<"Enter the number to occurrence: ";
    cin>>x;
    int counted=count(vect.begin(),vect.end(),x);
    cout<<counted<<endl;

    //find is used to find the element in vector
    cout<<"Enter the element to find: ";
    cin>>x;
    find(vect.begin(), vect.end(),x) != vect.end()? cout << "Element found\n" : cout << "Element not found\n";

    //In Binary search, we have to sort the element in vector and then do binary search
    //NOTE: return type of binary search function is boolean
    sort(vect.begin(),vect.end());
    cout<<"Enter the element to find(Binary Search): ";
    cin>>x;
    if(binary_search(vect.begin(),vect.end(),x))
    {
        cout<<"Element Found\n";
    }
    else
    {
        cout<<"Element not Found\n";
    }

    cout<<"The element in Vector: ";
    for(int i=0;i<n;i++)
    {
        cout<<vect[i]<<" ";
    }
    cout<<"\n";

    //Lower_bound
    cout<<"Enter the element to find lower bound: ";
    cin>>x;
    auto a = lower_bound(vect.begin(), vect.end(), x);
    cout<<"The position of lower bound is: "<<a-vect.begin()<<endl;

    //Upper_bound
    cout<<"Enter the element to find upper bound: ";
    cin>>x;
    auto b = upper_bound(vect.begin(),vect.end(),x);
    cout<<"The position of upper bound is: "<<b-vect.begin()<<endl;


    //to delete element in vector
    //arr.erase(position to be deleted)
    cout<<"Enter the position to delete: ";
    cin>>i;
    vect.erase(vect.begin()+i);

    cout<<"After deletion in Vector: ";
    for(int i=0;i<n;i++)
    {
        cout<<vect[i]<<" ";
    }
    cout<<"\n";

    //To get the unique elements in vector
    //arr.erase(unique(arr.begin(),arr.end()),arr.end())
    vect.erase(unique(vect.begin(),vect.end()),vect.end());
    cout << "\nVector after deleting duplicates: ";
    for (int i=0; i< vect.size(); i++)
    {
         cout << vect[i] << " ";
    }
    cout<<"\n";

    //In mathematics, permutation is the act of arranging the members of a set into a sequence or order, or, if the set is already ordered, rearranging its elements process called permuting
    //next_permutation(first_iterator, last_iterator)
    next_permutation(vect.begin(),vect.end());
    cout<<"After performing next permutation: ";
    for (int i=0; i< vect.size(); i++)
    {
         cout << vect[i] << " ";
    }
    cout<<"\n";


    //prev_permutation(first_iterator, last_iterator)
    prev_permutation(vect.begin(),vect.end());
    cout<<"After performing prev permutation: ";
    for (int i=0; i< vect.size(); i++)
    {
         cout << vect[i] << " ";
    }
    cout<<"\n";


    //distance is used to find the distance b/w two elements
    //distance(first_iterator,desired_position)
    x=distance(vect.begin(),max_element(vect.begin(),vect.end()));
    cout<<"The distance b/w beginning and max element in vector = "<<x;

    return 0;
}
