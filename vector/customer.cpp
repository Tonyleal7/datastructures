#include "customer.h"

Customer::Customer()
{
  string fName = " ";
  string lName = " ";
  string restaurant = " ";
  string bar = " ";
  string brand = " ";
  string entertainment = " ";
}

string Customer::getfirstName()
{
  return firstName;
}

string Customer::getlastName()
{
  return lastName;
}

string Customer::getRestaurant()
{
  return restaur;
}

string Customer::getBar()
{
  return barr;
}

string Customer::getBrand()
{
  return brandd;
}

string Customer::getEntertainment()
{
  return enter;
}

void Customer::setFirstname(string fname )
{
    firstName = fname;
}

void Customer::setLastname (string lname)
{
  lastName = lname;
}

void Customer::setRestaurant(string rest )
{
  restaur = rest;
}

void Customer::setBar(string bBar)
{
  barr = bBar;
}

void Customer::setBrand(string BBrand)
{
  brandd = BBrand;
}

void Customer::setEntertainment(string enterr)
{
  enter = enterr;
}

string Customer::fullname()
{
  return firstName + " " + lastName;
}
