//
//  bill.cpp
//  2
//
//  Created by Aaron Yih on 4/9/15.
//  Copyright (c) 2015 aaronyih. All rights reserved.
//

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    //prompt user for initial meter reading
    cout<<"Initial meter reading: ";
    double readingOne;
    cin>>readingOne;
    
    //prompt user for final meter reading
    cout<< "Final meter reading: ";
    double readingTwo;
    cin>>readingTwo;
    cin.ignore(10000,'\n');
    
    //propt user for their name
    cout << "Customer name: ";
    string name;
    getline(cin,name);
    
    //prompt user for the month
    cout << "Month number (1=Jan, 2=Feb, etc.): ";
    int month;
    cin>>month;
    
    double bill;
    double HCF;
    HCF = readingTwo-readingOne; //finding the change of the meter over that given month
    
    // checking if high or low season
    if(month <=10 && month >=4) //high season
    {
        if(HCF <=44)
        {
            bill=HCF*2.75;
        }
        else
        {
            bill=(44*2.75)+((HCF-44)*3.38);
        }
    }
    else
    {
        if(HCF <= 31)
        {
            bill = HCF*2.75;
        }
        else
        {
            bill = (31*2.75)+((HCF-31)*2.89);
        }
    }
    cout<<fixed<<showpoint;

    cout<<"---"<<endl;
    
    
    //checks to make sure that the first meter reading is positive
    if(readingOne < 0)
    {
        cout << "The initial meter reading must be nonnegative."<<endl;
        return(0);
    }
    
    //checks to make sure that the second meter reading is larger than the first
    else if(readingTwo < readingOne)
    {
        cout<<"The final reading must be at least as large as the initial reading."<<endl;
        return(0);
    }
    
    //checks if the user's name is empty
    else if(name.length() == 0)
    {
        cout<<"You must enter a customer name."<<endl;
        return(0);
    }
    
    // checks to see if the month is a valid month
    else if(month < 1 || month >12)
    {
        cout<<"The month number must be in the range 1 through 12."<<endl;
        return(0);
    }
    
    //if none of these errors occurs, print the bill
    else
    {
        cout<< "The bill for " << name << " is $" <<setprecision(2)<< bill << '\n'<<endl;
    }
    
}
