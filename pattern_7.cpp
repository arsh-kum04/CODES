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
        char start='A'+i-1; int j=1;
        while(j<=i){
            cout<<" "<<start;
            start++;
            j++;
        }
        cout<<endl;
        i++;
    }


    return 0;
}