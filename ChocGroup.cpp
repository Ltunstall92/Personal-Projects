/* Group Name: Yin 3
 Team Members contribution:
 Gabriela Delgado	33.3%
 William Benavides	33.3%
 Lane Tunstall		33.3%
 */

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    cout << "\t\t\tChocolate Calculator\n";
    cout << "\t\t      _______________________\n\n";
    int dollars, bars = 0, barcount = 0; //barcount is amount of coupons
    
    cout << "Input amount of dollars available:\t $";
    cin >> dollars;
    while (dollars >=1)
    {
        dollars = dollars - 1;
        bars += 1;
        barcount += 1; //Add 1 coupon per bar recieved
        if (barcount == 7)
        {
            bars += 1;
            barcount = barcount - 6; // Get one Coupon from opening the bar so subtract 6 not 7
        }
    }
    
    cout << "In total you will recieve " << bars << " chocolate bars. \n";
    cout << "You will also have " << barcount << " coupons remaining. \n";
   
    
}