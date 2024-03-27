#include<iostream>
using namespace std;

//main function
int main()
{
	//dynamic initialization of varibales
    int first_num=10, second_num=10, third_num=30;

	//logic testing using nested if else
    if(first_num==second_num)
    {
        if(second_num==third_num)
        {
            cout<<"The numbers are equal";
        }

        else
        {
            cout<<"the numbers are not equal";
        }
    }

    else
        {
            cout<<"the numbers are not equal";
        }

    return 0;
}
