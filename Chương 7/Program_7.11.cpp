#include <iostream>
#include <string>
using namespace std;

int main()
{
    string planets[] = { "Mercury", "Venus", "Earth", "Mars",
                        "Jupiter", "Saturn", "Uranus",
                        "Neptune", "Pluto (a dwarf planet)" };

    cout << "Dý?i ðây là các hành tinh:\n";

    // Hi?n th? các giá tr? trong m?ng.
    for (string val : planets)
        cout << val << endl;

    return 0;
}
