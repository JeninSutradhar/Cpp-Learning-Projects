#include <iostream>
using namespace std;

class Rectangle {
    public:
        float length;
        float width;

        float area() {
            return length * width;
        }

        float perimeter() {
            return 2 * (length + width);
        }
};

int main() {
    Rectangle r;

    cout << "Enter the length of the rectangle: ";
    cin >> r.length;

    cout << "Enter the width of the rectangle: ";
    cin >> r.width;

    float area = r.area();
    float perimeter = r.perimeter();

    cout << "The area of the rectangle is: " << area << endl;
    cout << "The perimeter of the rectangle is: " << perimeter << endl;

    return 0;
}
