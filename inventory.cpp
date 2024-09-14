#include <iostream>
using namespace std;


struct Product {

    string name;
    string lastSaleDate;
    string lastOrderDate;
    string nextOrderDate;

    int itemNumber;
    int yearModel;
    int onHand;
    int quantitySold;

    double price;
    double avgSales;


};


string itemCheck(); //Check inventory to see if product name is inventory. case insensitive
int findProduct(); //binarySearch to find item number in array containing all products.
int updateSold(); //update the quant sold
int updateOnHand(); //update quantity on hand
int updateAvgSales(); //update avg sales based on each new sale

void soldOut(); //if product is sold out display, item is sold out place new order
int orderMore(); //use last order date and avg sales since to calculate next orderDate




int main() {


    return 0;
}