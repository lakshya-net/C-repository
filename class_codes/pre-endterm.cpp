#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
class classroom {
  public:
    string name;
    int age;
    float grade;
    classroom(string n, int a, float g){ 
       return name(n), age(a), grade(g);
     }
};
int main (){
    string student_name;
  cin >>student_name;
    int student_age;
  cin >>student_age;
    float student_grade;
  cin >>student_grade;
    classroom student(student_name, student_age, student_grade);
}