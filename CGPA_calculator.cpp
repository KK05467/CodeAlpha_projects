#include <iostream>
using namespace std;

int main() {
    int n;               // number of courses
    float g[100], c[100]; // arrays for grade and credit
    float gp = 0;        // total grade points
    float tc = 0;        // total credits

    cout << "🎓 CGPA Calculator\n";
    cout << "------------------------\n";

    cout << "Enter number of courses: ";
    cin >> n;

    // Taking input for each course
    for (int i = 0; i < n; i++) {
        cout << "\nCourse " << i + 1 << ":\n";

        cout << "Enter grade (out of 10): ";
        cin >> g[i];

        cout << "Enter credit hours: ";
        cin >> c[i];

        gp += g[i] * c[i];
        tc += c[i];
    }

    // Displaying each course info
    cout << "\n📘 Course-wise Grades:\n";
    cout << "------------------------\n";
    for (int i = 0; i < n; i++) {
        cout << "Course " << i + 1 << ": Grade = " << g[i] << ", Credits = " << c[i] << endl;
    }

    // Calculating and displaying CGPA
    if (tc == 0) {
        cout << "\nNo credits entered. CGPA can't be calculated.\n";
    } else {
        float cgpa = gp / tc;
        cout << "\n------------------------\n";
        cout << "Total Credits: " << tc << endl;
        cout << "Total Grade Points: " << gp << endl;
        cout << "🎯 Your CGPA is: " << cgpa << endl;
    }

    return 0;
}
