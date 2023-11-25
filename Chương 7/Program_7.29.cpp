#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> values(100);

    cout << "Vector values có "
         << values.size() << " ph?n t?.\n";
    cout << "Tôi s? g?i phýõng th?c clear...\n";
    values.clear();
    cout << "Bây gi?, vector values có "
         << values.size() << " ph?n t?.\n";
    return 0;
}
 

