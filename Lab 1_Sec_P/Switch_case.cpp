#include<iostream>
using namespace std;

//main function
int main()
{
	//dynamic initialization of variable
    int day=8;
	
	//switc_case
    switch(day)
    {
        case 1: cout<<"sunday"<<endl;
                break;
        case 2: cout<<"monday"<<endl;
                break;
        case 3: cout<<"tuesday"<<endl;
                break;
        case 4: cout<<"wednesday"<<endl;
                break;
        case 5: cout<<"thursday"<<endl;
                break;
        case 6: cout<<" friday"<<endl;
                break;
        case 7: cout<<" Saturday"<<endl;
                break;
        default: cout<<" no day";
    }

    return 0;



}
