#include <iostream>

using namespace std;

int main()
{
    int b;
    int h;
    int area;

    cout << "The breath of the triangle? \n";
    cin >> b;

    cout << "The height of the triangle? \n";
    cin >> h;

    area = 0.5 * b * h;
    cout << "The area of the triangle is \n" << area << endl;

    return 0;
}
