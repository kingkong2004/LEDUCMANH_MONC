#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> values(100);

    cout << "Vector values c� "
         << values.size() << " ph?n t?.\n";
    cout << "T�i s? g?i ph��ng th?c clear...\n";
    values.clear();
    cout << "B�y gi?, vector values c� "
         << values.size() << " ph?n t?.\n";
    return 0;
}
 

