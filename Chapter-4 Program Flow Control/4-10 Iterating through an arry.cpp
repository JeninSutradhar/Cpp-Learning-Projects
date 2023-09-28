////////////////////////
// File name = 4-10 Iterating through an array (28 april 5:00)
////////////////////////
#include <iostream>

using namespace std;

int main()
{
    int items[6] = {53, 94, 41, 35, 61, 19};

    for(int i = 0; i < 6; i++)
    {
        cout << "Item no." << i+1;
        cout << " : " << items[i] << endl;
    } 

    return 0;
}
// display:
/*
Item no.1 : 53
Item no.2 : 94
Item no.3 : 41
Item no.4 : 35
Item no.5 : 61
Item no.6 : 19
*/