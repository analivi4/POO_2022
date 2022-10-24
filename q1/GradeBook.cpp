#include <string>

using namespace std;

private:
string courseName;
string teacherName;

public:
void setCourseName(string courseName){
     this->courseName = courseName; 
     } 
string getCourseName(){ 
    return this->courseName; 
    }
void setTeacherName(string teacherName){ 
    this->teacherName = teacherName; 
    } 
string getTeacherName(){ 
    return this->teacherName; 
    }