#include <iostream>
using namespace std;

int GetCreditHoursCount(Semester semester) {
    int courseSum = 0;

    for (int i = 0; i < semester.getCourseCount(); i++) {
        courseSum += semester.getCourses()[i].getCreditHours();
    }

    return courseSum;
}

bool FindCourseInSemesterRegistration(Semester semester, string courseCode) {

    for (int i = 0; i < semester.getCourseCount(); i++) {
        if (courseCode == semester.getCourses()[i].getCourseCode()) {
            true;
        }
    }

    return false;
    
}

class Course {
    private:
    string courseCode;
    string courseTitle;
    int creditHours;
    char section;
    int repeatCount;

    public:
    Course() {
        this->courseCode = "CSE 100";
        this->courseTitle = "Introduction to Programming";
        this->creditHours = 3;
        this->section = 'A';
        this->repeatCount = 0;
    }

    Course(string courseCode, string courseTitle, int creditHours, char section, int repeatCount) {
        this->courseCode = courseCode;
        this->courseTitle = courseTitle;
        this->creditHours = creditHours;
        this->section = section;
        this->repeatCount = repeatCount;
    }

    Course(Course &course) {
        this->courseCode = course.courseCode;
        this->courseTitle = course.courseTitle;
        this->creditHours = course.creditHours;
        this->section = course.section;
        this->repeatCount = course.repeatCount;
    }

    void setCourseCode(string courseCode) {
        this->courseCode = courseCode;
    }

    void setCourseTitle(string courseTitle) {
        this->courseTitle = courseTitle;
    }

    void setCreditHours(int creditHours) {
        this->creditHours = creditHours;
    }

    void setSection(char section) {
        this->section = section;
    }

    void setRepeatCount(int repeatCount) {
        this->repeatCount = repeatCount;
    }

    string getCourseCode() {
        return this->courseCode;
    }

    string getCourseTitle() {
        return this->courseTitle;
    }

    int getCreditHours() {
        return this->creditHours;
    }

    char getSection() {
        return this->section;
    }

    int getRepeatCount() {
        return this->repeatCount;
    }

    void getCourseInfo() {
        cout << "Course Code: " << getCourseCode() << endl;
        cout << "Course Title: " << getCourseTitle() << endl;
        cout << "Credit Hours: " << getCreditHours() << endl;
        cout << "Section: " << getSection() << endl;
        cout << "Repeat Count: " << getRepeatCount() << endl;
    }


};

class Semester {
    private:
    string semesterCode;
    int courseCount;
    Course *courses = new Course[courseCount]; // array of courses

    public:
    Semester() {
        this->semesterCode = "Fall 2020";
        this->courseCount= 1;
        this->courses = new Course[courseCount];
    }

    Semester(string semesterCode, int semesterCount, Course *courses) {
        this->semesterCode = semesterCode;
        this->courseCount= semesterCount;
        this->courses = courses;
    }

    Semester(Semester &semester) {
        this->semesterCode = semester.semesterCode;
        this->courseCount= semester.courseCount;
        
        for (int i = 0; i < courseCount; i++) {
            *(courses + i) = *(semester.courses + i);
        }
    }

    void setSemesterCode(string semesterCode) {
        this->semesterCode = semesterCode;
    }

    void setCourseCount(int semesterCount) {
        this->courseCount= semesterCount;
    }

    void setCourses(Course *courses) {
        this->courses = courses;
    }

    string getSemesterCode() {
        return semesterCode;
    }

    int getCourseCount() {
        return courseCount;
    }

    Course *getCourses() {
        return courses;
    }

    void getSemesterInfo() {
        cout << "Semester Code: " << getSemesterCode() << endl;
        cout << "Course Count: " << getCourseCount() << endl;
        cout << "Courses: " << endl;
        for (int i = 0; i < 3; i++) {
            cout << "Course " << i + 1 << endl;
            courses[i].getCourseInfo();
        }
    }
};