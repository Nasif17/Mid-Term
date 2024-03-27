#include <iostream>
using namespace std;
int main()
{
    int m,n;

    cout<<"Index number for Array_1"<<endl;
    cin>>m;
    int Array_1[m] ;
    cout<<"Give inputs for Array_1"<<endl;
    for (int i = 0; i < m; i++)
    {
        cin>>Array_1[i];
    }
    


    cout<<"Index number for Array_2"<<endl;
    cin>>n;
    int Array_2[n] ;
    cout<<"Give inputs for Array_2"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>Array_2[i];
    }
    

    

    int Array_3[m+n];

    for (int i= 0;i<m;i++)
    {
        Array_3[i]= Array_1[i];
    }

     for (int i= 0;i<n;i++)
    {
        Array_3[i+5]= Array_2[i];
    }
     for (int i=m+n-1;i>=0;i--)
    {
        cout<<Array_3[i];
        cout<<" ";
    }
    
     
}