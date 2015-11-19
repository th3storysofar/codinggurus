//Coding Gurus main source code

//
// main.cpp
// Project1
//
// Created by Thuan Tran on 11/4/15.
// Copyright © 2015 Thuan Tran. All rights reserved.
//

#include <iostream>
#include 
using namespace std;
class Food{
private:
string typeFood;
int fdQuantity;
double fdPrice;
double const tax = 0.075;
public:
string getType(); void setType(string);
int getQuantity(); void setQuantity(int);
double getPrice(); void setPrice(double);
double calTotalPrice(int, double);

};
void showMainMenu();
void showApetizer();
void showEntree();
void showSideDish();
void showDessert();
void showDrink();

int main ()
{
Food f;
string type;
int quantity;
double price;
showMainMenu();
cout <<"This program let the user order the food and calculate the total price" << endl;
cout <<"What would you like to have today? : ";
cin >> type;
cout <<"How many of this would you like to have?: ";
cin >> quantity;
cout <<"This item price is: ";
cin >> price;
cout <<"Your total price is: " << f.calTotalPrice(quantity, price);

char d;
cin>>d;
return 0;
}

string Food::getType()
{
return typeFood;
}

void Food::setType(string t)
{
typeFood = t;
}

int Food::getQuantity()
{
return fdQuantity;
}
void Food::setQuantity(int a)
{
fdQuantity = a;
}

double Food::getPrice()
{
return fdPrice;
}

void Food::setPrice(double p)
{
fdPrice = p;
}
double Food::calTotalPrice(int a, double b)
{
double totalPrice = (a * b) + (a * b )* tax;
return totalPrice;
}

void showMainMenu()
{
cout<<"-------------WELCOME TO CODING GURUS RESTAURANT--------------"<<endl;
cout<<"*******************MAIN MENU*********************"<<endl;
cout<<" 1)Apetizer 2)Entree 3)Side dish 4)Dessert 5)Drink "<<endl;
cout<<" +Chicken Nugget +Rib-eye firewood +Cesar salad +Cheesecaske +Soft drink"<<endl;
cout<<" +CodGurus plate +Clubhouse burger +Seasonal salad +Icecream +Coffee"<<endl;
}

