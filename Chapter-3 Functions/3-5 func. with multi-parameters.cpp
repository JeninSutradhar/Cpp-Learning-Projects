////////////////////
// file name = 3-5 Functions with multiple parameters
////////////////////

#include <iostream>
using namespace std;

//Function prototype
double volume(double, double, long);

int main()
{
    float height, width;
    long int depth;

    //get dimension's 
    cout << "Enter height (x.x), width (x.x), depth(x.x): ";
    cin >> height >> width >> depth;

    //calculate and diplay(volume)
    cout << "Volume = " << volume(height, width, depth);
    // calling a functoin with many args.

    return 0;
}

//calculate volume
double volume(double height, double width, long depth)
{
    return height * width * depth;
}

