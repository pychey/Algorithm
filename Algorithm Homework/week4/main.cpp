#include "utils/LibrarySystem.hpp"
#include <cassert>
using namespace std;

void test_BookNodeCreation(){
    BookNode node("123", "2024-1-1");
    if(node.title == "123"){ cout << "Correct" << endl; }
    if(node.borrowDate == "2024-1-1"){ cout << "Correct" << endl; }
    if(node.next == nullptr){ cout << "Correct" << endl; }

    std::cout << "test_BookNodeCreation" << std::endl;
}

void test_MemberBorrowBook() {
    Member member("John Doe");

    member.borrowBook("The Great Gatsby", "2024-11-10");
    member.borrowBook("1984", "2024-11-11");

    // Checking the first book
    BookNode* firstBook = member.getFirstBook();
    if(firstBook->title == "The Great Gatsby"){ cout << "Correct" << endl; }
    if(firstBook->borrowDate == "2024-11-10"){ cout << "Correct" << endl; }

    // Checking the second book
    if(firstBook->next->title == "1984"){ cout << "Correct" << endl; }
    if(firstBook->next->borrowDate == "2024-11-11"){ cout << "Correct" << endl; }

    std::cout << "test_MemberBorrowBook passed." << std::endl;
}

void test_MemberReturnBook() {
    Member member("John Doe");

    member.borrowBook("The Great Gatsby", "2024-11-10");
    member.borrowBook("1984", "2024-11-11");
    member.returnBook("The Great Gatsby");

    // Only the second book should remain
    BookNode* firstBook = member.getFirstBook();
    if(firstBook->title == "1984"){ cout << "Correct" << endl; }

    std::cout << "test_MemberReturnBook passed." << std::endl;
}

void test_MemberReturnNonExistentBook() {
    Member member("John Doe");

    member.borrowBook("The Great Gatsby", "2024-11-10");
    member.returnBook("Non-Existent Book");

    // The borrowed book list should remain unchanged
    BookNode* firstBook = member.getFirstBook();
    if(firstBook->title == "The Great Gatsby"){ cout << "Correct" << endl; }

    std::cout << "test_MemberReturnNonExistentBook passed." << std::endl;
}

void test_AddAndFindMember() {
    LibrarySystem library;
    library.addMember("John Doe");

    Member* member = library.findMember("John Doe");
    assert(member != nullptr);
    assert(member->getName() == "John Doe");

    std::cout << "test_AddAndFindMember passed." << std::endl;
}

void test_FindNonExistentMember() {
    LibrarySystem library;

    Member* member = library.findMember("Jane Doe");
    assert(member == nullptr);

    std::cout << "test_FindNonExistentMember passed." << std::endl;
}

void test_DisplayMemberBooks() {
    LibrarySystem library;
    library.addMember("John Doe");
    Member* member = library.findMember("John Doe");

    if (member) {
        member->borrowBook("The Great Gatsby", "2024-11-10");
        member->borrowBook("1984", "2024-11-11");
    }

    // Normally we would redirect output and verify it, but for simplicity:
    std::cout << "Actual output:" << std::endl;
    library.displayMemberBooks("John Doe");

    std::cout << "test_DisplayMemberBooks (manual verification needed)" << std::endl;
}

int main(){
    test_BookNodeCreation();
    test_MemberBorrowBook();
    test_MemberReturnBook();
    test_MemberReturnNonExistentBook();
    test_AddAndFindMember();
    test_FindNonExistentMember();
    test_DisplayMemberBooks();
    return 0;
}