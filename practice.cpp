#include <iostream>
#include <string>

bool checkID(int id) {
    // check if the ID is a 5 digit number
    if (id < 10000 || id > 99999) return false;
    return true;
}
class student {
    public:
        // GLOBAL VARIABLES
        int id[5];
        int checkuniqueID;
        int studentCount = 0;
        int age[5];
        int grade[5][4];
        std::string firstNames[5];
        std::string lastNames[5];
        std::string subjects[4] = {"Math", "English", "Science", "History"};
};

void studentInfoInsertion(student &s) {
    // informatioon of students
    for (int i = 0; i < 5; ++i) {
        std::cout << "Enter first name of student: ";
        std::cin >> s.firstNames[i];
        std::cout << "Ente the last name of student: ";
        std::cin >> s.lastNames[i];
        std::cout << "Enter the age of student: ";
        std::cin >> s.age[i];
        do {
            std::cout << "Enter the Unique ID of student: ";
            std::cin >> s.checkuniqueID;

            if(!checkID(s.checkuniqueID)) {
                std::cout << "Invalid input! Please enter a 5 digit number.";
            }

        } while (!checkID(s.checkuniqueID));

        s.id[i] = s.checkuniqueID;
        s.studentCount++;

        if (i < 4) {
            std::cout << "Do you want to add another student? (y/n): ";
            char choice;
            std::cin >> choice;
            if (tolower(choice) != 'y') {
                break;
            }
        }
    } 
}

int main() {
    int choice;
    student s;
    std::cout << "=====Student Management System=====\nPlease choose an option:\n     1. Insert Student Info\n     2. Update Student info\n     3. Delete Student info\n>>> ";
    std::cin >> choice;

    switch (choice){
        case 1:
            studentInfoInsertion(s);
            break;
        case 2:
            // update student infoo
            break;
        case 3:
            // delete student info
            break;
        case 4:
            // display student infoo
            break;
        default:
            std::cout << "Wrong input! Please try again.";
            break;
    }
}