/*#include<iostream>
using namespace std;
int main()
{
    int arr[3][4];
    //int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    //take input row wise
    // for(int row = 0; row < 3; row++)
    // {
    //     for(int col = 0; col < 4; col++)
    //     {
    //         cin>>arr[row][col];
    //     }
    // }

    //take input col wise
    for(int col=0; col<4; col++)
    {
        for(int row =0 ; row<3; row++)
        {
            cin>>arr[col][row];
        }
    }
    
    //print
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}*/

/*#include<iostream>
using namespace std;
bool isPresent(int arr[][4], int target, int row, int col)
{
    for(int row = 0; row < 3; row++)
    {
        for(int col=0;col<4;col++)
        {
            if(arr[row][col] == target)
            {
                return true;
            }
        }
        return false;
    }
}
//calculation sum of entire array
int printSum(int arr[][4], int row, int col)
{
    int sum = 0;
    for(int row = 0; row < 3; row++)
    {
        for(int col=0;col<4;col++)
        {
            sum += arr[row][col];
        }
    }
    cout<<sum<<endl;
}
//calculate sum of each row
void printRowSum(int arr[][4], int row, int col)
{
    for(int row=0;row<3;row++)
    {
        int sum = 0;
        for(int col=0;col<4;col++)
        {
            sum += arr[row][col];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}
//Largest sum is present in which row
void largestSum(int arr[][4], int row, int col)
{
    int maximum = 0;
    int rowIndex = -1;
    for(int row=0;row<3;row++)
    {
        int sum = 0;
        for(int col=0;col<4;col++)
        {
            sum += arr[row][col];
        }
        if(sum > maximum)
        {
            maximum = sum;
            rowIndex = row;
        }
    }
    cout<<"Maximum sum is: "<<maximum<<endl;
    cout<<"Row index is: "<<row;
}
int main()
{
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    printSum(arr,3,4);
    printRowSum(arr,3,4);
    largestSum(arr,3,4);
    // if(isPresent(arr, 17, 3, 4))
    // {
    //     cout<<"Element is present"<<endl;
    // }
    // else
    // {
    //     cout<<"Element is not present"<<endl;
    // }
}*/

#include<iostream>
using namespace std;
void wavePrint(int arr[][4], int r, int c)
{
    for(int col=0;col<4;col++)
    {
        if(col%2 == 0)
        {
            for(int row=0;row<3;row++)
            {
                cout<<arr[row][col]<<" ";
            }
        }
        else
        {
            for(int row=r-1;row>=0;row--)
            {
                cout<<arr[row][col]<<" ";
            }
        }
    }
}
void spiralPrint(int arr[][4], int row, int col)
{
    int topRow = 0;
    int bottomRow = row - 1;
    int leftCol = 0;
    int rightCol = col - 1;
    while(topRow <= bottomRow && leftCol <= rightCol)
    {
        //print top row
        for(int i = leftCol;i<= rightCol;i++)
        {
            cout<<arr[topRow][i]<<" ";
        }
        topRow++;
        //print right col
        for(int i = topRow; i <= bottomRow;i++)
        {
            cout<<arr[i][rightCol]<<" ";
        }
        rightCol--;
        //print bottom row
        for(int i = rightCol;i<= leftCol;i++)
        {
            cout<<arr[bottomRow][i]<<" ";
        }
        bottomRow--;
        //print left col
        for(int i = bottomRow;i<= topRow;i++)
        {
            cout<<arr[leftCol][i]<<" ";
        }
        leftCol++;
    }
}
int main()
{
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    // wavePrint(arr,3,4);
    spiralPrint(arr,3,4);
}
