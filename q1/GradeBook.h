#include <string>

using namespace std;

class GradeBook
{
public:
    GradeBook(string, string);
    void setCourseName(string);
    string getCourseName();
    void setTeacherName(string);
    string getTeacherName ();
    void displayMessage(string);

private:
    string courseName;
    string teacherName;
};