#include<bits/stdc++.h>
using namespace std;

class Student {
    string name;
    int roll_no;

    public:
    Student(string name, int roll_no) {
        this->name = name;
        this->roll_no = roll_no;
    }

    string getName() {
        return name;
    }
    int getRoll_no() {
        return roll_no;
    }

    void setName(string name) {
        this->name = name;
    }

    void setRoll_no(int roll_no) {
        this->roll_no = roll_no;
    }

};

bool comp(Student& a, Student& b) {
    return a.getRoll_no() < b.getRoll_no();
}

int main() {
    vector<Student> arr = { Student("C", 8), Student("B", 2), Student("A", 3), Student("D",-3), Student("E", 5) }; 
    sort(arr.begin(), arr.end(), comp);

    for(Student student : arr) {
        cout << "Name: " << student.getName() << ", Roll No: " << student.getRoll_no() << endl;
    }

    return 0;
}
