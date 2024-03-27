#include <iostream>
using namespace std;
int main()
{

    int m,duplicate;
    
    cout<<"Index number for Array_1"<<endl;
    cin>>m;
    int Array_1[m] ,Array_2[m];
    cout<<"Give inputs for Array_1"<<endl;
    for (int i = 0; i < m; i++)
    {
        cin>>Array_1[i];
        Array_2[i]=0;
    }
    

    

    for (int i = 0; i < m; i++)
    {
        cout<<Array_1[i]<<" ";
    }
    cout <<endl;
    

    

    for (int i = 0; i < m; i++)
    {
            int duplicate=1;
        for (int j = i+1;  j< m; j++)
        {
            if (Array_1[i]==Array_1[j])
            {
                duplicate++;
                Array_2[j]=-1;
            }
            
        }
        if (Array_2[i]==0)
        {
            Array_2[i]=duplicate;
            
           
        }
        
        
    }

    cout<<"the elementa occar in the Array is : "<<endl;

    for (int i = 0; i <m ; i++)
    {
        if(Array_2[i]!=-1)
        {
        cout<<Array_1[i]<<" Occars "<<Array_2[i]<<"times"<<endl;

        }
    }
    return 0;
    
    
}
