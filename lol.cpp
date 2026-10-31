#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int div = 3;
    const int quarter = 4;

    double num[div][quarter];
    double div_sale;
    double quarter_sale;
    double total_sale = 0;
    double highest_div_sale = 0;
    double highest_quarter_sale = 0;
    int highest_div = 0;
    int highest_quarter = 0;

    // Enter sales
    for (int row = 0; row < div; row++)
    {
        for (int col = 0; col < quarter; col++)
        {
            cout << "Enter sales for Division " << row + 1
                 << " Quarter " << col + 1 << ": ";
            cin >> num[row][col];
        }
    }

    cout << fixed << setprecision(2);
    cout << "\nAnnual Sales by Division:\n";

    for (int row = 0; row < div; row++)
    {
        div_sale = 0;
        for (int col = 0; col < quarter; col++)
        {
            div_sale += num[row][col];
        }

        cout << "Division " << row + 1 << ": $" << div_sale << endl;
        total_sale += div_sale;

        if (row == 0 || div_sale > highest_div_sale)
        {
            highest_div_sale = div_sale;
            highest_div = row + 1;
        }
    }

    cout << "\nTotal Sales by Quarter:\n";
    for (int col = 0; col < quarter; col++)
    {
        quarter_sale = 0;
        for (int row = 0; row < div; row++)
        {
            quarter_sale += num[row][col];
        }

        cout << "Quarter " << col + 1 << ": $" << quarter_sale << endl;
        if (col == 0 || quarter_sale > highest_quarter_sale)
        {
            highest_quarter_sale = quarter_sale;
            highest_quarter = col + 1;
        }
    }

    cout << "\nTotal Annual Sales for the Company: $" << total_sale << endl;

    // Bonus questions
    cout << "\nDivision with highest annual sales: Division "
         << highest_div << " ($" << highest_div_sale << ")" << endl;
    cout << "Quarter with highest total sales: Quarter "
         << highest_quarter << " ($" << highest_quarter_sale << ")" << endl;

    return 0;
}
