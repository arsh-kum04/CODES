#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter a number: " << endl;
    cin >> n;
    int i = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            if(n - j > 1)
            {
                cout<<" ";
            }
            cout<<"* ";
            j++;
        }
        cout <<endl;
        i++;
    }
    return 0;
}