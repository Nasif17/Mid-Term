#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int n =0,m=0;
     for (int  i = 0; i < 10; i++)
     {
        if (arr[i]%2==0)
        {
            n++;
        }
        else
        {
            m++;

        }
        
     }
     cout <<" Even elements are : "<<n<<endl;
     cout <<" Odd elements are : "<<m<<endl;
     
}
