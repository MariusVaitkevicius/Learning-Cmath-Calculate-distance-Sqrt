#include <iostream>
#include <cmath>
using namespace std;

 int main(){
 int x1,y1,x2,y2;
 double distance;

 //Calculate the distance between points with coordinates (x1, y1) and (x2, y2).

 cout<< "Enter first position (x1)" <<endl;
 cin>> x1;
 cout<< "Enter first position (y1)" <<endl;
 cin>> y1;
 cout<< "Enter second position (x2)" <<endl;
 cin>> x2;
 cout<< "Enter second position (y2)" <<endl;
 cin>> y2;

  distance = sqrt(pow((x2-x1),2)+pow((y2-y1),2)); // sqrt(x) = √x
 cout<<"distance="<<distance<<endl;

    return 0;
}
