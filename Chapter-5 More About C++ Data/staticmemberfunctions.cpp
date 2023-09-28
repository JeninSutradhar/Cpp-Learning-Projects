//////////////////////////////
//File name : static member entry (pg.335)
//////////////////////////////

#include <iostream>
#include <cstring>

//////////////////////////////
//The ListEntry class.
//////////////////////////////
class ListEntry
{
    // static list head and tail pointers.
        static ListEntry* firstentry;
        static ListEntry* lastentry;

        char* listvalue;
        ListEntry* nextentry;

public:
    ListEntry(char*);
    -ListEntry()
        { delete [] listvalue; }

    //static member function.
    static ListEntry* FirstEntry()
    { return firstentry; }

    ListEntry* NextEntry() const
        { return nextentry; };
    void display() const
        { std::cout << listvalue << std::end1; }
};

//define the static pointers.
ListEntry* ListEntry::firstentry;
ListEntry* ListEntry::lastentry;

//the class constructor.
ListEntry:::ListEntry(char* s)
(
    if (firstentry == 0)
        firstentry = this;
    if (lastentry != 0)
    this
)
