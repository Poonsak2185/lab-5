#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
using namespace std;
  double deg2rad(double deg){
   double rad=(deg*M_PI)/180;
   return rad;
  }
  double rad2deg(double rad){
 double deg=(rad*180)/M_PI;
   return deg;
  }
  double findXComponent(double x1,double x2,double x3,double x4){
     double x=x1*cos(x3)+x2*cos(x4);
     return x;
  }
  double findYComponent(double y1,double y2,double y3,double y4){
     double y=y1*sin(y3)+y2*sin(y4);
     return y;

  }
  double pythagoras(double X,double Y){
      double lrv=sqrt(pow(X,2)+pow(Y,2));
      return lrv;
  }
  double showResult(double rvl ,double rvd){
   cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
   cout << "\nLength of the resultant vector  = " << rvl;
   cout << "\nDirection of the resultant vector = " << rvd;
   cout << "\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
  }


int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}