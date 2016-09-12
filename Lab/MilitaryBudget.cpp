/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
const unsigned char PERCENT = 100;
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare all Variables Here
    float milBdgt=585e9f;
    float fedBdgt=3.999e12f;
    float pMilSpd;
    
    //Input or initialize values Here
    pMilSpd=milBdgt/fedBdgt*PERCENT;
    
    //How to round to 2 decimal places
    int round=pMilSpd*100;
    pMilSpd=round/100.0f;
    
    //Process/Calculations Here
    cout<<"The Military Budget for 2016 = $"<<milBdgt<<endl;
    cout<<"The Federal Budget for 2016 = $"<<fedBdgt<<endl;
    cout<<"The Percentage spent on the Military = $"<<pMilSpd<<"%"<<endl;
    
    //Output Located Here
    

    //Exit
    return 0;
}

