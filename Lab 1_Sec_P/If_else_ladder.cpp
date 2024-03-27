#include<iostream>
using namespace std;
//main function
int main()
{
	//dynamic initialization of variables
    int first_num=10, second_num=10, third_num=10;
	
	//if_else_if_else ladder
    if((first_num==second_num)&& (second_num==third_num))
    {
        cout<<"all numbers are equal";
    }

    else if(first_num==second_num)
    {
        cout<<"first and second num are equal";
    }

    else if(first_num==third_num)
    {
        cout<<"first and third num are equal";
    }

    else if(second_num==third_num)
    {
        cout<<"second and third num are equal";
    }
	
    else
    {
        cout<<"no numbers are equal";
    }
	
	return 0;
}
