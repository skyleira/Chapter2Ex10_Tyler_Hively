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
	int Milesperg;
	cout << "----MPG Calculator----" << endl;
	cout << "Please enter how many gallons of gasoline your vehicle can hold." << endl;
	cin >> Gasgallons;
	cout << "Please enter how many miles your vehicle can travel before needing to refuel." << endl;
	cin >> Milesdriven;
	Milesperg = Milesdriven / Gasgallons;
	cout << "If a vehicle cam hold up to " << Gasgallons << " gallons of gasoline..." << endl;
	cout << "And can travel up to " << Milesdriven << " before needing to refuel..." << endl;
	cout << "Then that vehicle has a mileage of " << Milesperg << " miles per gallon (MPG)." << endl;


}
