#include<iostream>
using namespace std;
//main function
int main()
{
	//dynamic initialization of variables 
	//here i is the loop variable
    int num=1, i=0;

	//while loop syntax: while(loop conddition)
	//here loop will be executed from i=0 to i=99.
    while(i<100)
    {
		//printing the value of a variable
        cout<<num<<endl;
		//incrementing the value of a variable
        num++;
		//incrementing the value of the loop variable
        i++;
    }
	
	return 0;
}
