// testBook.cpp
#include <iostream>
#include "Book.h"

int main() {
    // Creating an instance of the Book class
    Book myBook("The Great Gatsby", "F. Scott Fitzgerald", "9780743273565");

    // Testing methods
    std::cout << "Title: " << myBook.getTitle() << std::endl;
    std::cout << "Author: " << myBook.getAuthor() << std::endl;
    std::cout << "ISBN: " << myBook.getISBN() << std::endl;

    // Setting new values
    myBook.setTitle("1984");
    myBook.setAuthor("George Orwell");
    myBook.setISBN("9780451524935");
    myBook.setPublisher("Penguin Books");

    // Getting and printing the updated values
    std::cout << "Updated Title: " << myBook.getTitle() << std::endl;
    std::cout << "Updated Author: " << myBook.getAuthor() << std::endl;
    std::cout << "Updated ISBN: " << myBook.getISBN() << std::endl;
    std::cout << "Publisher: " << myBook.getPublisher() << std::endl;

    return 0;
}
