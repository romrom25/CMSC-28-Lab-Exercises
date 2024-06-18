// Header Files
#include <iostream>

// Book Class
class Book {

    // Private Attributes
    private:
        std::string Title;
        std::string Author;
        std::string ISBN;
        std::string Publisher;

    // Constructor and Methods
    public:
        // Constructor
        Book(std::string title, std::string author, std::string isbn, std::string publisher)
            : Title(std::move(title)), Author(std::move(author)), ISBN(std::move(isbn)), Publisher(std::move(publisher)) {}

        // Methods for getting Details
        const std::string getTitle() const { return Title; }
        const std::string getAuthor() const { return Author; }
        const std::string getISBN() const { return ISBN; }
        const std::string getPublisher() const { return Publisher; }

        // Methods for setting Details
        void setTitle(const std::string bktitle) { Title = bktitle; }
        void setAuthor(const std::string bkauthor) { Author = bkauthor; }
        void setISBN(const std::string bkisbn) { ISBN = bkisbn; }
        void setPublisher(const std::string bkpublisher) { Publisher = bkpublisher; }
};
