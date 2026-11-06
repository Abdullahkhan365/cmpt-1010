#include <iostream>
using namespace std;

int main(){
    const int Departments =2;
    const int Students =3;
    const int Exams =4;
    double Scores[Departments][Students][Exams];

    double Total_student_score;
    double Total_Department_score;
    double Total_Collage_score=0;

    double Avg_student_score;
    double Avg_department_score;
    double Avg_collage_score;

    for(int i =0; i < Departments; i++){
        for(int j=0; j < Students; j++){
            for(int k=0; k < Exams; k++){
                cout<<"Enter the score for Department "<<i+1
                <<" Student "<<j+1<<" Exam "<<k+1<<" :";
                cin>>Scores[i][j][k];
            }
        }
    }

    for(int i =0; i < Departments; i++){
        cout<<"Department "<<i+1<<" :";
        Total_Department_score =0;
        for(int j=0; j < Students; j++){
            Total_student_score =0;
            for(int k=0; k < Exams; k++){
                Total_student_score += Scores[i][j][k];
                
                
            }
            Avg_student_score = Total_student_score/Exams;
            cout<<"Student "<<j+1<<" Average: "<<Avg_student_score;
            
            Total_Department_score += Total_student_score;
        }
        Avg_department_score = Total_Department_score/ (Exams*Students);
        cout<<"Department "<<i+1<<" Average: "<<Avg_department_score;

        Total_Collage_score +=Total_Department_score;
    }

    Avg_collage_score = Total_Collage_score/(Departments*Students*Exams);
    cout<<"Overall College Average: "<<Avg_collage_score;
}