#include<iostream>
#include<math.h>
using namespace std;

class line
{
double x1,y1,x2,y2,ans;

public:
    void setvalues(double a, double b, double c, double d)
    {
        ans = sqrt(((a-c)*(a-c))+((b-d)*(b-d)));
    }
    double length()
    {
        return ans;
    }

};

int main()
{

line l1;
double x1,y1,x2,y2;
cout<<"Enter x1: ";
cin>>x1;

cout<<"\nEnter y1: ";
cin>>y1;

cout<<"\nEnter x2: ";
cin>>x2;

cout<<"\nEnter y2: ";
cin>>y2;
l1.setvalues(x1,y1,x2,y2);
cout<<l1.length();


return 0;
}
