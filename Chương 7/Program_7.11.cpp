#include <iostream>
#include <string>
using namespace std;

int main()
{
    string planets[] = { "Mercury", "Venus", "Earth", "Mars",
                        "Jupiter", "Saturn", "Uranus",
                        "Neptune", "Pluto (a dwarf planet)" };

    cout << "D�?i ��y l� c�c h�nh tinh:\n";

    // Hi?n th? c�c gi� tr? trong m?ng.
    for (string val : planets)
        cout << val << endl;

    return 0;
}
