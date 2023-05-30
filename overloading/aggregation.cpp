//code showcasing aggregation
#include <iostream>
#include <string>

class Course;

class Assignment {
private:
    std::string name_;
    float marks_;
public:
    Assignment(std::string, float);
    ~Assignment();
    friend class Course;
};

Assignment::Assignment(std::string name, float marks) {
    std::cout << "Constructor for Assignment." << std::endl;
    this->name_ = name;
    this->marks_ = marks;
}

Assignment::~Assignment() {

    std::cout << "Destructor for Assignment." << std::endl;
    std::cout << "Deleting: " << this->name_ << std::endl;
}

class Course {
private:
    std::string code_;
    std::string name_;
    Assignment *assignments_[16];
    int num_assignments_ = 0;
public:
    Course(std::string, std::string);
    ~Course();
    void add_assignment(Assignment*);
    void display_assignments();
};

Course::Course(std::string course_code,std::string course_name) {
    code_ = course_code;
    name_ = course_name;
}

Course::~Course() {
    std::cout << "Course has been deleted." << std::endl;
}

void Course::add_assignment(Assignment* assignment) {
    assignments_[num_assignments_] = assignment;
    num_assignments_++;
}

void Course::display_assignments() {
    std::cout << "Assignments list: " << std::endl << std::endl;
    for (int i = 0; i < num_assignments_; i++){
        std::cout << "Assignment: " 
                << assignments_[i]->name_ << std::endl;
        std::cout << "marks: " << assignments_[i]->marks_ 
                << std::endl << std::endl;
    }
    std::cout << "End of Assignments" << std::endl;
}

int main()
{
    Course course("SEP200", "Object-Oriented Programming");

    Assignment workshop01("Workshop01", 3.0), 
        workshop02("Workshop02", 3.0), 
        quiz01("quiz01", 1.5), quiz02("quiz02", 1.5);

    course.add_assignment(&workshop01);
    course.add_assignment(&workshop02);
    course.add_assignment(&quiz01);
    course.add_assignment(&quiz02);

    course.display_assignments();

    return 0;
}