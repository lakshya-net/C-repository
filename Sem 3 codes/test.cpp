#include <iostream>
using namespace std;

class student {
    public:
    string name;
    int rollno;
    float marks;
    
    void getdata()
    {
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter roll number: ";
        cin>>rollno;
        cout<<"Enter marks: ";
        cin>>marks;
    }
    
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Roll Number: "<<rollno<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};

int main (){
    student s1, s2, s3, s4, s5;
    s1.getdata();
    s2.getdata();
    s3.getdata();
    s4.getdata();
    s5.getdata();

    s1.display();
    s2.display();
    s3.display();
    s4.display();
    s5.display();
    return 0;
}

