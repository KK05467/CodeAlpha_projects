#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int numCourses;
    cout << "Enter the number of courses you have taken: ";
    cin >> numCourses;

    vector<float> grades(numCourses);
    vector<int> credits(numCourses);

    for (int i = 0; i < numCourses; ++i)
    {
        cout << "Enter grade for course " << i + 1 << ": ";
        cin >> grades[i];

        cout << "Enter credit hours for course " << i + 1 << ": ";
        cin >> credits[i];
    }

    return 0;
}
