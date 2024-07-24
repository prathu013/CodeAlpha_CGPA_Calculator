#include <iostream>
using namespace std;

int main() {
    int numCourses;
    cout << "Enter the number of courses: ";
    cin >> numCourses;

    float credits[numCourses], grades[numCourses];
    float totalCredits = 0, totalGradePoints = 0;

    for (int i = 0; i < numCourses; i++) {
        cout << "Enter credits and grade for course " << i + 1 << ": ";
        cin >> credits[i] >> grades[i];
        totalCredits += credits[i];
        totalGradePoints += credits[i] * grades[i];
    }

    float gpa = totalGradePoints / totalCredits;
    float cgpa = gpa;

    cout << "GPA: " << gpa << endl;
    cout << "CGPA: " << cgpa << endl;

    return 0;
}
