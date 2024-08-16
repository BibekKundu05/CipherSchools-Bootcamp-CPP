/*
#include<iostream>
using namespace std;
int main()
{
    // int arr[5] = {2,4,5,7,9};
    // cout<<"Before "<<arr[4]<<endl;
    // arr[4] = 90;
    // cout<<"After "<<arr[4]<<endl;
    // for(int i : arr)
    // {
    //     cout<<i<<" ";
    // }
    int arr[7];
    int sum = 0;
    cout<<"Enter 7 numbers: ";
    for(int i=0;i<7;i++)
    {
        cin>>arr[i];
    }
    cout<<"Numbers are: ";
    for(int i=0;i<7;i++)
    {
        sum += arr[i];
        cout<<arr[i]<<" ";
    }
    cout<<"\n"<<sum;
}
*/

//1
/*#include<iostream>
using namespace std;
int findLargest(int arr[], int size)
{
    int max = 0;
    for(int i=0;i<size;i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int findSecondLargest(int arr[], int size)
{
    int max = 0;
    int s_max = 0;
    for(int i=0;i<size;i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    for(int i=0;i<size;i++)
    {
        if(arr[i] > s_max && arr[i] != max)
        {
            s_max = arr[i];
        }
    }
    return s_max;
}
int findSecondSmallest(int arr[], int size)
{
    int min = 1000;
    int s_min = 1000;
    for(int i=0;i<size;i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    for(int i=0;i<size;i++)
    {
        if(arr[i] < s_min && arr[i] != min)
        {
            s_min = arr[i];
        }
    }
    return s_min;
}
int main()
{
    int arr[5] = {2,5,7,3,1};
    cout<<"Largest element is : "<<findLargest(arr,5)<<endl;
    cout<<"Second Largest element is : "<<findSecondLargest(arr,5)<<endl;
    cout<<"Second Smallest element is : "<<findSecondSmallest(arr,5);
}*/

//2
/*#include<iostream>
using namespace std;
int missingNumber(int arr[], int n)
{
    int n_sum = (n*(n+1))/2;
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum += arr[i];
    }
    return n_sum - sum;
}
int main()
{
    int arr[5] = {1,2,4,5};
    cout<<missingNumber(arr, 5); 
}*/

//3
/*
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool pairSum(vector<int> vec, int size, int target)
{
    sort(vec.begin(), vec.end());

    int i = 0;
    int j = size - 1;

    while(i<j)
    {
        int sum = vec[i] + vec[j];
        if(sum == target)
        {
            return true;
        }
        else if(sum < target)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return false;
}
int main()
{
    vector<int> vec = {2,1,3,4};
    bool ans = pairSum(vec, 4, 40);
    if(ans)
    {
        cout<<"Sum of two numbers is equal to target";
    }
    else
    {
        cout<<"Sum of two numbers is not equal to target";
    }
}*/
