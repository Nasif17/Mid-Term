#include <iostream>
using namespace std;
int main()
{
     int m,n,Flag=0;

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

    
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
              if(Array_1[i]==Array_2[j])
              {
                cout<<Array_1[i];

                Flag++;
                
              }
           
              
                
            }
            
          

        }
        if (Flag==0)
        {
          cout<<"No common Number"<<endl;
        }
        
       
            
        
}