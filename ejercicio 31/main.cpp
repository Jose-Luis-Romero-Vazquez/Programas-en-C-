#include <iostream>
//Jose Luis Romero Vazquez
//311869
//20/02/20
using namespace std;

int main()
{
    cout << "Poilnomio de -5 a 5 " << endl;
    cout<<"x/t p(x)\n";
    cout<<"=3x3+5x2+x-2"<<endl;

    for (int x=-5; x<=5; x++)
    {

        cout<<x<<"\t";
        cout<<3*x*x*x+5*x*x+x-2<<endl;
    }

    return 0;
}
