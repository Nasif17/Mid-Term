#include <iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"input size of the array : "<<endl;
    cin>>n;
    
    int arr[n];
    
    
    
    cout <<"input Numbers"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i = 0; i<n;i++)
    {
        sum =sum + arr[i];
    }

   double average = (double)sum/n;
   

   

    cout <<"Average :"<<average;



}