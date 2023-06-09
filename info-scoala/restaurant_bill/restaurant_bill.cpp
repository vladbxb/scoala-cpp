#include <iostream>

using namespace std;

int main()
{
    //Create variables
    float tax,tip,meal_charge,total_meal,total_bill;
    //Assign the values
    meal_charge = 44.50;
    tax = 6.75;
    tip = 15;
    //Calculate tax, tip and total
    total_meal = tax/100 * meal_charge;
    total_bill = total_meal + total_meal * tip/100;
    //Print out values
    cout<<"The meal cost is $"<<meal_charge<<", the tax amount is $"<<total_meal<<", and the total bill is $"<<total_bill<<".";
    return 0;
}
