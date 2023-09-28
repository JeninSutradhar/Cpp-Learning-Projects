#include <iostream>

using namespace std;

int
main ()
{
  struct Person
  {
    string name;
    int age;
    float height;
    string gender;
  };

  Person john = { "John", 25, 1.7, "boy" };
  cout << john.name << " is " << john.age << " years old and " << john.height << " meters tall. " << "Hence he is a " << john.gender << ".";

  return 0;
}
