// Header Files
#include <iostream>
#include "Book.h"

int main() {
    // Create an instance of the Book class
    Book myBook("Pride and Prejudice", "Jane Austen", "9780141439518", "Penguin Books");

    // Print old book details
    std::cout << "Title: " << myBook.getTitle() << std::endl;
    std::cout << "Author: " << myBook.getAuthor() << std::endl;
    std::cout << "ISBN: " << myBook.getISBN() << std::endl;
    std::cout << "Publisher: " << myBook.getPublisher() << std::endl;

    // Input new book details
    myBook.setTitle("To Kill a Mockingbird");
    myBook.setAuthor("Harper Lee");
    myBook.setISBN("9780061120084");
    myBook.setPublisher("J. B. Lippincott & Co.");

    // Print new book details
    std::cout << std::endl;
    std::cout << "Updated Title: " << myBook.getTitle() << std::endl;
    std::cout << "Updated Author: " << myBook.getAuthor() << std::endl;
    std::cout << "Updated ISBN: " << myBook.getISBN() << std::endl;
    std::cout << "Updated Publisher: " << myBook.getPublisher() << std::endl;

    // Terminate program
    return 0;
}
