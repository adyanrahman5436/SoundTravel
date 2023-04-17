#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double air, water, steel, distance;
    unsigned int medium;
    
    air = 1133.2;
    water = 4871.0;
    steel = 16400.0;
    
    cout << "\tTime for Sound to Travel through a Medium given Distance" << endl;
    cout << "\n1 - Air" << endl;
    cout << "2 - Water" << endl;
    cout << "3 - Steel" << endl;
    
    cout << "\nEnter the number of the medium: ";
    cin >> medium;
    
    switch (medium)
    {
        case 1:
            cout << "\ndistance to travel (in feet): ";
            cin >> distance;
            cout << fixed << setprecision(4) << "In air it will take " << (distance/air) << " seconds to travel " << distance << " feet." << endl;
            break;
        case 2: 
        cout << "distance to travel (in feet): ";
            cin >> distance;
            cout << fixed << setprecision(4) << "In water it will take " << (distance/water) << " seconds to travel " << distance << " feet." << endl;
            break;
        case 3:
        cout << "distance to travel (in feet): ";
            cin >> distance;
            cout << fixed << setprecision(4) << "In steel it will take " << (distance/steel) << " seconds to travel " << distance << " feet." << endl;
            break;
        default:
            cout << "The entry is invalid. Run the program again." << endl;
    }

    return 0;
}
