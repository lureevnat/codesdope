/*
Problem:
Let us work on the menu of a library. Create a structure containing book information like accession number, name of author, book title and flag to know whether book is issued or not.
Create a menu in which the following can be done.
1 - Display book information
2 - Add a new book
3 - Display all the books in the library of a particular author
4 - Display the number of books of a particular title
5 - Display the total number of books in the library
6 - Issue a book
(If we issue a book, then its number gets decreased by 1 and if we add a book, its number gets increased by 1)
*/

// Not Completed - Need to write - Straight forward Answer so ignoring this question for now

#include <iostream>
using namespace std;

struct book
{
    int an;
    char title[30];
    char author[30];
    int issued;
};

void display(struct book b)
{
    cout << "Accession number-\t" << b.an << "\nBook-\t" << b.title << "\nAuthor-\t" << b.author << "\n";
    if (b.issued == 0)
    {
        cout << "Issued-\tNo\n";
    }
    else
    {
        cout << "Issued-\tYes\n";
    }
}

void add()
{
    // Do yourself
    // issued will be 0 by defalut
}

// passing array
void book_by_author(struct book *b, int number_of_books, char auth[])
{
    int i;
    for (i = 0; i < number_of_books; i++)
    {
        if (strcmp((b + i)->author, auth))
        {
            display(*(b + i));
        }
    }
}

void book_by_title()
{
    // do it yourself
}

void issue_a_book(struct book b)
{
    b.issued = 1;
}

int main()
{
    struct book books[10] = {{12345, "C Programming", "Dennis Ritchie", 10},
                             {12346, "Data Structures", "seymour", 10},
                             {12347, "Algorithms", "CLRS", 10},
                             {12348, "Digital Logic Design", "morris mano", 10},
                             {12349, "Computer Organization and Architecture", "morris mano", 10},
                             {12350, "Operating Systems", "Galvin", 10},
                             {12351, "Theory of Computations", "peter linz", 10},
                             {12352, "Compiler Design", "ullman", 10},
                             {12353, "Computer Networks", "Forouzan", 10}};

    return 0;
}