#include <iostream>
using namespace std;

struct Student{
    int ID,Credit;
    float CGPA;
};

Student userInput()
{
    Student s;

    cout<<"input the ID :";
    cin>>s.ID;

    cout<<"input the credit :";
    cin>>s.Credit;

     cout<<"input the CGPA :";
     cin>>s.CGPA;

     cout<<endl;
     return s;
}

void ShowDetailsID(Student s)
{
    cout<<"The students ID :"<<s.ID<<endl;

}


int main()
{
    Student student[5];
    for (int i = 0; i < 5; i++)
    {
        student[i]= userInput();
    }
    cout<<"Print all the student's IDs whose CGPA is more than 3.60"<<endl;
    for (int i = 0; i < 5; i++)
    {
        if (student[i].CGPA>3.60)
        {
            ShowDetailsID(student[i]);
        }
    }

    cout<<"Print all the student's IDs who have completed more than 60 credits"<<endl;

    for (int i = 0; i < 5; i++)
    {
        if (student[i].Credit>60)
        {
            ShowDetailsID(student[i]);
        }
        
    }
    
    
    
}