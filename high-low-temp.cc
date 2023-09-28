/**
 *   @file: high_temp-low_temp-temp.cc
 * @author: Matthew Boucher
 *   @date: 9/28/23
 *  @brief: A program that recordes the high_tempest and low_tempest 
 * tempretures in a given time frame.
 */

#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{
    double high_temp,low_temp,rhigh_temp=0,rlow_temp=1000;
    int day_count=0;

cout<<"Enter -100 once done!"<<endl;
    while(high_temp != -100 && low_temp != -100)
    {
    cout<<"Enter high_temp: ";
    cin>> high_temp;
    cout<<"Enter low_temp: ";
    cin>> low_temp;
    
    if (high_temp >= rhigh_temp)
        {
            rhigh_temp = high_temp;
        }
        if (low_temp <= rlow_temp && low_temp != -100)
        {
            rlow_temp= low_temp;
        }
        day_count++;
    }
    cout<<"The record high_temp over "<<day_count<<" days was "<<rhigh_temp<<"f"<<endl;
    cout<<"The record low_temp over "<<day_count<<" days was "<<rlow_temp<<"f"<<endl; 
}
