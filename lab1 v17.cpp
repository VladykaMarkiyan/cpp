#include <iostream> 
#include <cmath>
 
using namespace std; 
 
int main() { 
    double hx = 0.5, ha = 1, z; 
    for (double x = 1; x <= 8; x += hx) { 
        for (double a = 2; a <= 10; a += ha) { 
            if (a > x) { 
                z = pow(a, 2) + x; 
            } else if (a == x) { 
                z = pow(a, 2); 
            } else { 
                z = pow(a, 2) - x; 
            } 
            cout << "x = " << x << "\t"; 
            cout << "a = " << a << "\t"; 
            cout << "z = " << z << endl; 
        } 
    } 
    return 0; 
}
