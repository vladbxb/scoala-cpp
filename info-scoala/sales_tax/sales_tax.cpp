#include <iostream>

using namespace std;

int main()
{
    //Create variables
    float purchase_amount,state_tax,county_tax,tax_amount;
    //Assign values
    purchase_amount=52;
    //Taxes are percentages
    state_tax=4;
    county_tax=2;
    //Calculate taxes separately from purchase value
    tax_amount = state_tax/100*purchase_amount + county_tax/1000*purchase_amount;
    //Print out the value
    cout<<"The value of the purchase is "<<purchase_amount<<"$ and the added taxes are "<<tax_amount<<".";
    return 0;
}
