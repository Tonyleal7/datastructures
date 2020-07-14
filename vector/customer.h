#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <string>
using namespace std;

class Customer
{
private:
  string firstName;
  string lastName;
  string restaur;
  string barr;
  string brandd;
  string enter;

public:
  Customer();
  string getfirstName();
  string getlastName();
  string getBar();
  string getRestaurant();
  string getBrand();
  string getEntertainment();
  void setFirstname(string fname);
  void setLastname(string lname);
  void setBar(string bBar);
  void setRestaurant(string rest);
  void setBrand(string BBrand);
  void setEntertainment(string enterr);
  string fullname();
};
#endif
