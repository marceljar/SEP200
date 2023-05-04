#ifndef STUDENT_H
#define STUDENT_H

class Student{
    private:
        char first_name_[16];
        char last_name_[16];
        float gpa_;
    public:
        void edit() ;
        void display();
};

#endif