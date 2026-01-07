#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;

    float credit; 
    char grade;
    float total_credits = 0;
    float total_points = 0;
   

    cout <<"Enter the  number of subjects:";
    cin >> n;
    for(int i = 1; i<= n ; i++){
        cout << "Enter credit for subjects "<< i << ": ";
        cin  >> credit;
        cout << "Enter grade(A/B/C/D/E/F) for subjects "<< i <<": ";
        cin >> grade;

        float grade_point ;
        if(grade == 'A') {grade_point = 10;}
        else if(grade == 'B') {grade_point = 9;}
        else if(grade == 'C') {grade_point = 8;}
        else if(grade == 'D') {grade_point = 7;}
        else if(grade == 'E') {grade_point = 6;}
        else{
            grade_point = 0;
        }

        total_credits  +=  credit;

        total_points += credit * grade_point;
    }
    float CGPA = total_points / total_credits;
    cout << "Your CGPA is: " << CGPA << endl;
    return 0;
}