//
//  main.cpp
//  hw2test
//
//  Created by Aaron Yih on 4/17/15.
//  Copyright (c) 2015 aaronyih. All rights reserved.
//
#include <iostream>
using namespace std;

int main()
{
    int len;
    
    cout << "Enter a number: ";
    cin >> len;
    int i = 0;
    if(len < 0)
        len = len*(-1);
    else
        len = len;
    
    do
    {
        int j = i+1;
        while(j < len)
        {
            cout << " ";
            j++;
        }
        cout << "#" << endl;
        i++;
    }
    while(i < len);
    
}