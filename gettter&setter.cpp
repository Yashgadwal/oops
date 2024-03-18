#include <iostream>
using namespace std;

class number
{
private:
    int a, b, c;

public:
    void setData()
    {
        // a = a1;
        // b = b1;
        // c = c1;

        cout << "Enter the value of a:- "<< endl;
        cin >> a ;

        cout << "Enter the value of b:- "<< endl;
        cin >> b;

        cout << "Enter the value of c:- "<< endl;
        cin >> c ;
    };

    void getData()
    {
        cout << endl;
        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
    };
};

int main()
{
    number num;
    num.setData();
    num.getData();

    return 0;
}