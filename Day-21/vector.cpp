#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main()
{
    // create vector , declare
    vector<int> v;
    //insert
    v.push_back(2);
    v.push_back(20);
    v.push_back(30);
    //size and capacity
    cout<<"size of vector : "<<v.size()<<endl;
    cout<<"capacity of vector : "<<v.capacity()<<endl;

    //update value
    v[1]= 100;

    vector<int>v1(5,1);
    cout<<"size of vector : "<<v1.size()<<endl; // 5
    cout<<"capacity of vector : "<<v1.capacity()<<endl; // 5
    v1.push_back(123);
    cout<<"size of vector : "<<v1.size()<<endl; //5
    cout<<"capacity of vector : "<<v1.capacity()<<endl; //10

    vector<int>v3 = {11,12,13,14,15};
    cout<<v3[2]<<endl;

    // delete value from vector
    vector<int>v4;
    v4.push_back(123);
    v4.push_back(124);
    v4.push_back(125);
    v4.push_back(126);
    v4.push_back(127);

    v4.pop_back();

    cout<<"size of vector : "<<v4.size()<<endl; //4
    cout<<"capacity of vector : "<<v4.capacity()<<endl; //8

    v4.erase(v4.begin() + 1);
    for(int i = 0; i <v4.size() ; i++)
    {
        cout<<v4[i]<<" ";
    }
    cout<<endl;
    // insert value at particular index position.
    v4.insert(v4.begin()+ 2,300);
    for(int i = 0; i <v4.size() ; i++)
    {
        cout<<v4[i]<<" ";
    }
    cout<<endl;

    v4[1]=12345;
    for(int i = 0; i <v4.size() ; i++)
    {
        cout<<v4[i]<<" ";
    }
    cout<<endl;

    v4.clear(); // remove all elements
     cout<<"size of vector : "<<v4.size()<<endl; //0
    cout<<"capacity of vector : "<<v4.capacity()<<endl; //8

    vector<int>arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(50);
    cout<<arr[0]<<endl;
    cout<<arr.front()<<endl;
     cout<<arr[arr.size()-1]<<endl;
    cout<<arr.back()<<endl;

    vector<int>a;
    // copy value of 1 vector to another
    a = arr;
    cout<<a.size()<<endl;

    for(auto it = a.begin(); it != a.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    for(auto i : a)
    {
        cout<<i<<" ";
    }
    cout<<endl;

     vector<int>ar;
    ar.push_back(12910);
    ar.push_back(5670);
    ar.push_back(90);
    ar.push_back(2350);
    ar.push_back(29);

    // increasing order sorting
    sort(ar.begin(), ar.end());
    for(auto i : ar)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    //decreasing order sorting

    sort(ar.begin(), ar.end() , greater<int>());
    for(auto i : ar)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    // another decreasing order sorting
    sort(ar.rbegin(), ar.rend());
    for(auto i : ar)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    // searching in binary search
     vector<int>ar1;
    ar1.push_back(12910);
    ar1.push_back(5670);
    ar1.push_back(90);
    ar1.push_back(2350);
    ar1.push_back(29);
     sort(ar1.begin(), ar1.end());

    cout<<binary_search(ar1.begin(), ar1.end(),12910)<<endl;
    
    // find index position
    cout<<find(ar1.begin(), ar1.end(), 90) - ar1.begin() <<endl;

    // Finding maximum and minimum elements
    auto max_it = max_element(ar1.begin(), ar1.end());
    auto min_it = min_element(ar1.begin(), ar1.end());

    cout << "Max Element: " << *max_it << endl;
    cout << "Min Element: " << *min_it << endl;

     // Counting occurrences of 5670
    int count_5670 = count(ar1.begin(), ar1.end(), 5670);
    cout << "Occurrences of 5670: " << count_5670 << endl;

    // Sorting the vector before using lower_bound and upper_bound
    sort(ar1.begin(), ar1.end());

    // Using lower_bound and upper_bound
    auto lb = lower_bound(ar1.begin(), ar1.end(), 5670); // First element >= 5670
    auto ub = upper_bound(ar1.begin(), ar1.end(), 5670); // First element > 5670

    cout << "Lower Bound of : " << (lb != ar1.end() ? *lb : -1) << endl;
    cout << "Upper Bound of : " << (ub != ar1.end() ? *ub : -1) << endl;

    
    return 0;
}