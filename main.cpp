#include <iostream>
using namespace std;

int main() {
    //GPA Calculator
    /* What this program does is to take in the marks a student gets in all his or
     * her courses and allocate a grades for them and calculate the overall GPA the courses.
     * Total courses should be nine and 5 courses have 3 credit hours and the rest 2.*/

    //declaring variable for storing individual marks for courses.
    int marks[9];

    //printing out prompt for entering marks
    cout <<"\n\n______ Please enter the marks gotten in the various courses ______"<<endl;

    //for loop for entering values in the marks array
    for (int i = 0;i<9;i++) {
        cout <<"\n\nCourse "<<i+1<<":"<<endl;
        cin >> marks[i];
    }

    //declaring variable for storing individual marks for courses.
    double credit_hours[9];

    //printing out prompt for entering credit hours allocated for each course
    cout <<"\n\n_____ Please enter credit hours allocated for various courses ______"<<endl;

    //for loop for entering credit hours
    for (int i = 0;i<9;i++) {
        cout <<"\n\nCredit hour for course "<<i+1<<":"<<endl;
        cin >> credit_hours[i];
    }


    //array for course gpas
    double course_gpa[9];

    //allocating the grades for the various marks gotten in the courses.
    for (int i = 0; i < 9; i++) {
        if (marks[i] >= 80) {
            course_gpa[i] = 4.0;
            cout << "Grade for course " << i + 1 << ": A" << " with Course gpa of " << "4.0" << endl;
        } else if (marks[i] >= 75) {
            course_gpa[i] = 3.5;
            cout << "Grade for course " << i + 1 << ": B+" << " with Course gpa of " << "3.5" << endl;
        } else if (marks[i] >= 70) {
            course_gpa[i] = 3.0;
            cout << "Grade for course " << i + 1 << ": B" << " with Course gpa of " << "3.0" << endl;
        } else if (marks[i] >= 65) {
            course_gpa[i] = 2.5;
            cout << "Grade for course " << i + 1 << ": C+" << " with Course gpa of " << "2.5" << endl;
        } else if (marks[i] >= 60) {
            course_gpa[i] = 2.0;
            cout << "Grade for course " << i + 1 << ": C" << " with Course gpa of " << "2.0" << endl;
        } else if (marks[i] >= 55) {
            course_gpa[i] = 1.5;
            cout << "Grade for course " << i + 1 << ": D+" << " with Course gpa of " << "1.5" << endl;
        } else if (marks[i] >= 50) {
            course_gpa[i] = 1.0;
            cout << "Grade for course " << i + 1 << ": D" << " with Course gpa of " << "1.0" << endl;
        } else if (marks[i] >= 45) {
            course_gpa[i] = 0.5;
            cout << "Grade for course " << i + 1 << ": E+" << " with Course gpa of " << "0.5" << endl;
        } else if (marks[i] < 45) {
            course_gpa[i] = 0;
            cout << "Grade for course " << i + 1 << ": F" << " with Course gpa of " << "0" << endl;
        }
    }

    //calculating for overall Gpa


    //calculating for total product of credit hours and course gpa for various courses

    double prod_cred_hour_course_gpa = 0;
    for (int i = 0; i < 9; i++) {
        prod_cred_hour_course_gpa += credit_hours[i] * course_gpa[i];
    }

    //calculating total number of credit hours
    double tot_cred_hours = 0;
    for (int i = 0; i < 9; i++) {
        tot_cred_hours += credit_hours[i];
    }

    // Overall Gpa
    double Gpa = prod_cred_hour_course_gpa / tot_cred_hours;

    //printing out Gpa
    cout<<"\n\n______Your Gpa is____ "<<
    printf("%.1f" ,Gpa);

    return 0;
}
