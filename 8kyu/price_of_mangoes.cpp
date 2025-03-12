//Accountant time!For a given quantity and price(per mango), calculate the total cost of the mangoes.
//But!Every third mango is free!

int mango(int quantity, int price)
{
    return (quantity - quantity / 3) * price;
}