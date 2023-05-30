//code showcasing association
#include <iostream>
#include <string>

class Course;

class Room {
private:
    std::string name_;
    Course *course_;
public:
    Room(std::string);
    ~Room();
    void display_info();
    friend class Course;
};

class Course {
private:
    std::string code_;
    std::string name_;
    Room *room_;
public:
    Course(std::string, std::string);
    ~Course();
    bool book_room(Room*);
    void display_info();
    friend class Room;
};

Room::Room(std::string name) {
    this->name_ = name;
    this->course_ = nullptr;
}

Room::~Room() {
    std::cout << "Destructor for Room." << std::endl;
}

void Room::display_info() {
    std::cout << "Room name: " << name_ << std::endl;
    if (course_ == nullptr) {
        std::cout << "Room currently empty" << std::endl;
    } else {
        std::cout << "Course: " << course_->code_ << std::endl;
    }    
}

Course::Course(std::string course_code,std::string course_name) {
    this->code_ = course_code;
    this->name_ = course_name;
    this->room_ = nullptr;
}

Course::~Course() {
    std::cout << "Course has been deleted." << std::endl;
}

bool Course::book_room(Room *room) {
    if (room->course_ == nullptr) {
        room->course_ = this;
        this->room_ = room;
        return true;
    } else {
        std::cout << "Room already booked" << std::endl;
        return false;
    }
}

void Course::display_info() {
    std::cout << "Course code: " << code_ << std::endl;
    std::cout << "Course name: " << name_ << std::endl;
    if (room_ == nullptr) {
        std::cout << "Room: " << "TBD" << std::endl;
    } else {
        std::cout << "Room: " << room_->name_ << std::endl;
    }    
}

int main()
{
    Course sep200("SEP200", "Object-Oriented Programming");
    Course btr490("BTR490", "Investigative Research Internship");
    
    Room c3032("C3032"), e2042("E2042");

    sep200.book_room(&c3032);
    btr490.book_room(&c3032);
    
    sep200.display_info();
    btr490.display_info();

    btr490.book_room(&e2042);
    btr490.display_info();

    c3032.display_info();
    e2042.display_info();

    return 0;
}