#include <iostream>
using namespace std;

int pow(int number, int power)
{
    if (power == 0)
        return 1;
    if (power == 1)
        return number;
    int ans = pow(number, power / 2);
    if (power % 2 == 0)
    {

        return ans * ans;
    }
    else
    {
        return number * ans * ans;
    }

}
int main()
{
    int number, power;
    cout << "enter a number: " << endl;
    cin >> number;
    cout << "enter power: " << endl;
    cin >> power;
    int ans = pow(number, power);
    cout << "answer is : " << ans << endl;
    return 0;
}