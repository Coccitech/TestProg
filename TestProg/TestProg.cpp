#include <iostream>
#include <string>
#include "Personne.h"
#include "Car.h"
#include "Color.h"
#include "Gender.h"

using namespace std;
int main()
{
    cout << "Hello World!\n";
    cout << " > The person John was created\n";
    Personne John = Personne("John", "Doe", "June 25, 1990", 25320, false, Gender::Man);
    John.Intro();
}
