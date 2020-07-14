#include <iostream>
#include <string>
#include <fstream>
#include "customer.cpp"
#include <vector>
#include <numeric>
using namespace std;


void readData(vector<Customer>*customers);
void customerBars(vector<Customer>*customers);

int main()
{
  vector <Customer> customers;
  readData(&customers);
  customerBars(&customers);

}

void readData(vector<Customer>*customers)
{
  string fname;
  string lname;
  string bBar;
  string rest;
  string BBrand;
  string enterr;

  fstream infile;
  infile.open("customerrecords.txt");
  while(infile >> fname >> lname >> rest >> bBar >> BBrand >> enterr)
  {
    Customer c;
    c.setFirstname(fname);
    c.setLastname(lname);
    c.setRestaurant(rest);
    c.setBar(bBar);
    c.setBrand(BBrand);
    c.setEntertainment(enterr);

    customers->push_back(c);
  }

 infile.close();
}

void customerBars(vector<Customer>*customers)
{
  int m = customers->size();
  string temp;
  ofstream outfile;
  outfile.open("BarsData.txt");

  for (int i = 0; i < m; i++)
  {
    temp = customers->at(i).getBar();
    outfile << temp << endl;
  }
  outfile.close();
}
