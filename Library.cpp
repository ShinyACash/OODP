#include <iostream>
using namespace std;

class Library {
private:

	// Declaring the books of the Library object
	int books;

public:

	// Declaring static int variable for total books over all libraries
	static int totalBooks;

	// Constructor
	Library() : books(0) {}

	// Function for adding books to the library and updating totalBooks
	int addBooks(int num) {
		books += num;
		Library::totalBooks += num;
		return 0;
	}

	// Function for returning number of books of the particular library
	int getBooks() {
		return books;
	}

	// Function for returning number of total books accross all libraries
	static int getTotalBooks() {
		return Library::totalBooks;
	}
};

// Initializing total books 
int Library::totalBooks = 0;

int main() {

	Library lib1;
	Library lib2;

	lib1.addBooks(100);
	lib2.addBooks(50);

	cout << "Books in lib1: " << lib1.getBooks() << endl;
	cout << "Books in lib2: " << lib2.getBooks() << endl;

	cout << "Total books: " << Library::getTotalBooks();

}