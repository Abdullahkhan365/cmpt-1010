#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    string Student_full_name;
    double Assignment_grade;
    double Midterm_grade;
    double Final_exam_grade;
    double Final_grade;

    cout<<"Enter Student's Full name: ";
    getline(cin, Student_full_name);

    cout<<"Enter the grade for Assignment: ";
    cin>>Assignment_grade;

    cout<<"Enter the grade for midterm: ";
    cin>>Midterm_grade;

    cout<<"Enter the grade for final exam: ";
    cin>>Final_exam_grade;

    Final_grade = Assignment_grade * 0.30 + Midterm_grade * 0.30 + Final_exam_grade * 0.40;

    cout<<fixed<<setprecision(2);

    cout<<"Student: "<< Student_full_name<< endl;
    cout<<"Final grade: "<< Final_grade<<endl;

    return 0;
}
