#include<iostream>
using namespace std;

//main function
int main()
{
	//dynamic initialization of variables
    int first_num=10, second_num=10, third_num=30;
	//logic testing
    if((first_num==second_num) && (second_num==third_num))
    {
        cout<<"The numbers are equal";
    }

    else
    {
        cout<<"The numbers are not equal";
    }

    return 0;
}

