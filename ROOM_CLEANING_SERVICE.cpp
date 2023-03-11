/***********************************************************************
* AUTHOR-TUSHAR SINGH   DATE-11-03-2023  PROJECT-ROOM_CLEANING_SERVICE
************************************************************************/

/*
  ROOM_CLEANING_SERVICE

  Charges:
        ₹500 per small room
        ₹800 per large room
        Sales tax rate is 8% of cost

Prompt the user for the number of small and large rooms they would like cleaned
and provide an estimate such as:
 
Estimate for Room cleaning service  
Number of small rooms: 3
Number of large rooms: 1
Price per small room: Rs.500
Price per large room: Rs.800
Cost : ₹2300
Service_charge : Rs.184 

======================================
Total estimate: Rs.2484
======================================

THANKS FOR USING OUR SERVICE./

*/

#include<iostream>
#include<iomanip>

using namespace std;

int main(){

    cout << "Hello, welcome to Faapto rooms Cleaning Service" << endl;

    int small_rooms {0};
    cout << "\nHow many small rooms would you like to be cleaned? ";
    cin >> small_rooms;
    
    int large_rooms {0};
    cout << "How many large rooms would you like to be cleaned? ";
    cin >> large_rooms;

    const double  price_per_small_room {500.0};
    const double  price_per_large_room {800.0};

    const double gst {0.08};

    cout << "\nEstimate for room cleaning service" << endl;
    cout << "Number of small rooms: " << small_rooms << endl;
    cout << "Number of large rooms: " << large_rooms << endl;

    cout << "Price per small room: Rs." << price_per_small_room << endl;
    cout << "Price per large room: Rs." << price_per_large_room << endl;

    double cost{0};
    cost = (price_per_small_room * small_rooms) + (price_per_large_room * large_rooms);   //cost for cleaning rooms

    double tax{0};
    double service_charge{100.0};   //extra charges
    tax = gst*cost;                 //net tax  

    cout<<"Cost :Rs."<<cost<<endl;
    cout<<"Tax :Rs."<<tax<<endl;

    cout<<"\n================================"<<endl;
    cout<<"Total estimate :Rs."<<(cost+tax+service_charge);   //total cost
    cout<<"\n================================"<<endl;

    cout<<"THANKS FOR USING OUR SERVICE"<<endl;

    cout<<endl;

    return 0;
    
    
}