#include<iostream>
using namespace std;
struct Person
{
    string name;
    int age;
    char gender;
    string address;
};

void printPersonDetails(Person p)
{
    cout<<"Name: "<<p.name<<endl;
    cout<<"Age: "<<p.age<<endl;
    cout<<"Gender: "<<p.gender<<endl;
    cout<<"Address: "<<p.address<<endl;
}

int main()
{
    Person p1,p2,p3,p4;
    p1.name="Mr.xyz";
    p1.age=20;
    p1.gender='m';
    p1.address="Mirpur-10, Dhaka-1216";
    p2.name="Ms.xyz";
    p2.age=16;
    p2.gender='f';
    p2.address="Mirpur-2, Dhaka-1216";
    p3.name="Mr.lmk";
    p3.age=30;
    p3.gender='m';
    p3.address="Mirpur-1, Dhaka-1216";
    p4.name="Mrs.lmk";
    p4.age=25;
    p4.gender='f';
    p4.address="Mirpur-1, Dhaka-1216";
    /*Person p5;
    Person p6;
    Person p7;
    Person p8;
    Person p9;
    person p10;*/

    Person brr[4];
    brr[0]=p1;
    brr[1]=p2;
    brr[2]=p3;
    brr[3]=p4;

    for(int i=0;i<4;i++)
    {
        printPersonDetails(brr[i]);
    }


    return 0;
}
