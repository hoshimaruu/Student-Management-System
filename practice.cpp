#include <iostream>

int main() {
    //required variables
    int choice;
    int id[3];
    int age[3];
    float grade[12];
    std::string subjects[4] = {"Math", "Science", "English", "History"};
    std::string firstNames[3] = {"Emu", "Suisei", "Gura"};
    std::string lastNames[3] = {"Otori", "Hoshimachi", "Gawr"};

    std::cout << "Student Management System\nPlease choose an option: 1. Insert Student Info 2. Update Student info, 2. Delete Student info\n>>> ";
    std::cin >> choice;

    if (choice == 1) {
        std::cout << "List of students:\n";
        
        for (int i = 0; i < 3; ++i) {
            std::cout << i + 1 << ". " << firstNames[i] << " " << lastNames[i] << "\n";
        }

        std::cout << "Choose a student to insert info (1-3): ";
        std::cin >> choice;

        if (choice == 1) {
            std::cout << "Enter ID: ";
            std::cin >> id[0];
            std::cout << "Enter age: ";
            std::cin >> age[0];
            for (int i = 0; i < 4; ++i) {
                std::cout << "Enter grade for " << subjects[i] << ": ";
                std::cin >> grade[i];
            }
        }
    }
}