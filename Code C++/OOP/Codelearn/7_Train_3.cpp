#include "7_Train_3_Author.cpp"
#include "7_Train_3_Book.cpp"

int main()
{
    vector<Author> authors;
    authors.push_back(Author("Kien","tienkiennropro@gmail.com"));
    authors.push_back(Author("Hoang","hoang_devpro@gmail.com"));
    authors.push_back(Author("Vu","vunguyen_developer@gmail.com"));
    Book book("Lap Trinh la dam me",authors,198000);
    cout << "Book's name: " << book.getName() << endl;
    cout << "Price: " << book.getPrice() << endl;
    cout << "Author's names: "<<book.getAuthorNames() << endl;
    return 0;
}