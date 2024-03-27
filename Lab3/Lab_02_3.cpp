#include <iostream>
using namespace std;
int main()
{

    int m;
    
    cout<<"Index number for Array_1"<<endl;
    cin>>m;
    int Array_1[m] ;
    cout<<"Give inputs for Array_1"<<endl;
    for (int i = 0; i < m; i++)
    {
        cin>>Array_1[i];
    }
    int size = sizeof(Array_1)/sizeof(Array_1[0]);

    int Flag =0;

    for (int i = 0; i < size; i++)
    {
        cout<<Array_1[i];
    }
    

    

    for (int i = 0; i < size; i++)
    {
            int duplicate=0;
        for (int j = i+1;  j< size; j++)
        {
            if (Array_1[i]==Array_1[j])
            {
                duplicate++;
                break;
            }
            
        }
        if (duplicate!=1)
        {
            Array_1[Flag++]=Array_1[i];
            
           
        }
        
        
    }

    cout<<"By deleteing the elements the output will be :  ";

    for (int i = 0; i <Flag ; i++)
    {
        cout<<Array_1[i]<<" ";
    }
    return 0;
    
    
}
