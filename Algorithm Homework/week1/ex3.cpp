#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

#define DECIMAL_DIGIT 2

struct Student {
    int id;
    std::string name;
    std::vector<int> scores;
};

// Create students list without using initializer list
std::vector<Student> students;

void initStudents() {
    // Explicitly create vectors for each student's scores
    Student s1 = {1, "Alice", std::vector<int>(5)};
    s1.scores[0] = 85; s1.scores[1] = 92; s1.scores[2] = 78; s1.scores[3] = 94; s1.scores[4] = 88;
    
    Student s2 = {2, "Bob", std::vector<int>(5)};
    s2.scores[0] = 76; s2.scores[1] = 81; s2.scores[2] = 72; s2.scores[3] = 85; s2.scores[4] = 79;
    
    Student s3 = {3, "Charlie", std::vector<int>(5)};
    s3.scores[0] = 93; s3.scores[1] = 89; s3.scores[2] = 84; s3.scores[3] = 91; s3.scores[4] = 95;
    
    Student s4 = {4, "David", std::vector<int>(5)};
    s4.scores[0] = 65; s4.scores[1] = 70; s4.scores[2] = 75; s4.scores[3] = 60; s4.scores[4] = 80;
    
    Student s5 = {5, "Eve", std::vector<int>(5)};
    s5.scores[0] = 54; s5.scores[1] = 68; s5.scores[2] = 72; s5.scores[3] = 77; s5.scores[4] = 65;
    
    // Add students to the vector
    students.push_back(s1);
    students.push_back(s2);
    students.push_back(s3);
    students.push_back(s4);
    students.push_back(s5);
}

/**
 * Calculate the average score of the given student
 * @param Student : the student
 * @return the average of student's scores
 */
float calculateAverage(Student student) {
    int sum = 0;
    
    // Use a traditional for loop instead of range-based for
    for (size_t i = 0; i < student.scores.size(); ++i) {
        sum += student.scores[i];
    }
    
    // Check to avoid division by zero
    if (student.scores.size() == 0) {
        return 0.0f;
    }

    // Return the average score
    return static_cast<float>(sum) / student.scores.size();
}

/**
 * Calculate GPA based on average score
 * @param Student : the student
 * @return the GPA of the student
 */
float calculateGPA(Student student) {
    float average = calculateAverage(student);
    
    // GPA is assigned based on the average score
    if (average >= 90) return 4.0f;
    else if (average >= 80) return 3.0f;
    else if (average >= 70) return 2.0f;
    else if (average >= 60) return 1.0f;
    else return 0.0f;
}

/**
 * Calculate letter grade based on GPA
 * @param Student : the student
 * @return the letter grade of the student
 */
std::string calculatGrade(Student student) {
    float gpa = calculateGPA(student);

    // Letter grade based on the GPA
    if (gpa == 4.0f) return "A";
    else if (gpa == 3.0f) return "B";
    else if (gpa == 2.0f) return "C";
    else if (gpa == 1.0f) return "D";
    else return "E";
}

/**
 * Compute and print student's statistics (average, GPA, grade letter) on the console
 * @param Student : the student
 */
void printStudentStatistics(const Student& student) {
    float average = calculateAverage(student);
    float gpa = calculateGPA(student);
    std::string grade = calculatGrade(student);

    // Printing the results with proper formatting
    std::cout << "| " << std::setw(10) << student.id << " | "
              << std::setw(10) << student.name << " | "
              << std::setw(14) << average << " | "
              << std::setw(4) << gpa << " | "
              << std::setw(5) << grade << " |\n";
}

int main() {
    // Initialize students list
    initStudents();

    std::cout << std::fixed << std::setprecision(DECIMAL_DIGIT); // Set decimal precision for average and GPA
    std::cout << "------------------------------------------------------------\n";
    std::cout << "| Student ID | Name      | Average Score |  GPA | Grade |\n";
    std::cout << "------------------------------------------------------------\n";

    // Call the function printStudentStatistics for each student
    for (size_t i = 0; i < students.size(); ++i) {
        printStudentStatistics(students[i]);
    }

    std::cout << "------------------------------------------------------------\n";
    
    return 0;
}
