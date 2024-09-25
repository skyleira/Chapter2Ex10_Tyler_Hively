/*
Title: Chapter 2 Exercise 10 - Miles per Gallon - Part A
File Name:   Chapter2Ex10_Tyler_Hively.cpp
Programmer:  Tyler Hively
Date:        09/25/2024
Requirements: A car holds 15 gallons of gasoline and can travel 375 miles before refueling. 
Write a program that calculates the number of miles per gallon the car gets. 
Display the result on the screen.

Hint: Use the following formula to calculate miles per gallon (MPG):
MPG = Miles Driven/Gallons of Gas Used

Once you have coded this and placed in your main branch in GitHub, 
create a second branch that revises your code so that 
the user can enter the number of gallons and the miles driven.
Be sure you have posted your code to GitHub and submitted the URL  in Canvas for that project.
*/

#include <iostream>
using namespace std;
int main()
{
	int Milesdriven;
	int Gasgallons;
	int Mileage;
	Milesdriven = 375;
	Gasgallons = 15;
	Mileage = 375 / 15;
	cout << "----Mileage Calculator----" << endl;
	cout << "If a vehicle cam hold up to " << Gasgallons << " gallons of gasoline..." << endl;
	cout << "And can travel up to " << Milesdriven << " before needing to refuel..." << endl;
	cout << "Then that vehicle has a mileage of " << Mileage << " miles per gallon (MPG)." << endl;


}
