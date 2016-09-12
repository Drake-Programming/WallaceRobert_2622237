/* 
 * File:   main.cpp
 * Author: Robert D. Wallace
 * Created on September 12th, 2016, 10:28 AM
 * Purpose:  Calculate the distance dropped in free fall
 */

//System Libraries Here
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
const float GRAVITY=32.174;
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here


int main(int argc, char** argv) {
    
    //Declare all Variables Here
    float time; //Time as input in seconds
    float disFell; //Distance in free fall
    int places;
    
    //Input or initialize values Here
    cout<<"This program determines distance in free fall"<<endl;
    cout<<"Input the time free fall, units of seconds"<<endl;
    cin>>time;
    cout<<"How many decimal places to round the result"<<endl;
    cin>>places;

    //Process/Calculations Here
    disFell=GRAVITY*time*time/2;
    float shift=pow(10,places);
    int round1=disFell*shift+0.5;
    disFell=round1/shift;
    
    //Output Located Here
    cout<<"Gravity = "<<GRAVITY<<" ft/sec*2"<<endl;
    cout<<"True fallen = "<<time<<" ft"<<endl;
    cout<<"Distance traveled = "<<disFell<<" ft"<<endl;

    //Exit
    return 0;
}

