#include <iostream>
using namespace std;
int main()
{
    int size;
    int s;
    
    cout<<"Index number for Array_1"<<endl;
    cin>>s;
    int Array_1[s] ;
    cout<<"Give inputs for Array_1"<<endl;
    for (int i = 0; i < s; i++)
    {
        cin>>Array_1[i];
    }
    size = sizeof(Array_1)/sizeof(Array_1[0]);
    int n,m=0;

    cout<<"Search the number you want to input : " ;

    cin>> n;

    for (int i = 0; i <size ; i++)
    {
        if(Array_1[i]==n)
        {
            m++;
        }
        
    }

    cout<<"The number occars  "<<m;
    
}