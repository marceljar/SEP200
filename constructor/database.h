#ifndef DATABASE_H
#define DATABASE_H
//to allow for strcpy to work
//#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

struct Student{
    char first_name[16];
    char last_name[16];
    float gpa;
};

class Data{
private:
    int size_;
    Student *list_;
public:
    Data();
    Data(char[], char[], float);
    ~Data();
    bool add_student();
    void list_students();
};

#endif