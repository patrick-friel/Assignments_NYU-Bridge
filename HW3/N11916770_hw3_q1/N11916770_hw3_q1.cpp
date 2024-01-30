#include <iostream>
using namespace std;

constexpr double Club_Discount = .90;
constexpr double Promotion_Discount = .50;

int main() {
    double firstItem;
    double secondItem;
    char clubCard;
    double taxRate;
    double basePrice;
    double discountPrice;
    double totalPrice;


    cout << "Enter price of first item:";
    cin >> firstItem;
    cout << "Enter price of second item:";
    cin >> secondItem;
    cout << "Does customer have club card?";
    cin >> clubCard;
    cout << "Enter tax rate e.g. 5.5 for 5.5% tax:";
    cin >> taxRate;

    basePrice = firstItem + secondItem;
    cout << "Base price: " << basePrice << endl;

    if (clubCard == 'y' || clubCard == 'Y')
    {
        if(firstItem >= secondItem)
        {
            discountPrice = ((secondItem * Promotion_Discount) + firstItem) * Club_Discount;
        }
        else if(firstItem < secondItem)
        {
            discountPrice = ((firstItem * Promotion_Discount) + secondItem) * Club_Discount;
        }
    }
    else if(clubCard == 'N' || clubCard == 'n')
    {
        if(firstItem >= secondItem)
        {
            discountPrice = ((firstItem * Promotion_Discount) + secondItem);
        }
        else if(secondItem > firstItem)
        {
            discountPrice = ((secondItem * Promotion_Discount) + firstItem);
        }
    }
    else
    {
        cout << "Wrong input";
    }

    cout << "Price after discounts: " << discountPrice << endl;

    totalPrice = discountPrice * ((taxRate / 100.0) + 1);
    cout << "Total price: " << totalPrice << endl;

    return 0;
}
