//
//  bill.cpp
//  2
//
//  Created by Aaron Yih on 4/9/15.
//  Copyright (c) 2015 aaronyih. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout<<"Initial meter reading: ";
    int readingOne;
    cin>>readingOne;
    
    cout<< "Final meter reading: ";
    int readingTwo;
    cin>>readingTwo;
    cin.ignore(10000,'\n');
    
    cout << "Customer name: ";
    string name;
    getline(cin,name);
    
    cout << "Month number (1=Jan, 2=Feb, etc.): ";
    int month;
    cin>>month;
    
    double bill;
    int HCF;
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
    
    cout<<"Initial meter reading: "<<readingOne<<endl;
    cout<<"Final meter reading: "<<readingTwo<<endl;
    cout<<"Customer name: "<<name<<endl;
    cout<<"Month number: "<<month<<endl;
    cout<<"---"<<endl;
    cout.precision(5);
    cout<< "The bill for " << name << " is $" << bill << endl;
}
