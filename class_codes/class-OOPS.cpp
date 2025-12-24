#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class student {
public:
    string name;
    int age, marks;

    void getdata() {
        cin >> name;
        cin >> age;
        cin >> marks;
    }

    void showdata() {
        cout << "Name: " << name << " | Age: " << age << " | Marks: " << marks << endl;
    }
};

int main() {
    student s1[10];
    int n = 10;

    for (int i = 0; i < n; i++) {
        s1[i].getdata();
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (s1[j].marks > s1[j + 1].marks) {
                swap(s1[j], s1[j + 1]);
            }
        }
    }

    s1[n - 1].showdata(); 
    s1[n - 2].showdata(); 
    s1[n - 3].showdata();

    return 0;
}