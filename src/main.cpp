#include <iostream>

using namespace std;
//int add (int a, int b);  Function Prototype >> a header file
/*int add(int g, int h){
  int q = g + h
  return q;
} long version of the below*/
// Function definition >> cpp file
int add(int x, int y){
  return x + y;
}
//int printCountTo10();
int printCountTo10(){
  int i = 1;
  while (i <= 10){
    cout << " " << i <<endl;
    i++;
  }
  return i;
}
void print_count_to_10();

void sort_three_nums(double&, double&, double&);
void sort_three_nums(double& a, double& b, double& c){
  if(a > b){
    double tmp = a;
    a = b;
    b = tmp;
  }
  if (b > c){
    double tmp = b;
    b = c;
    c = tmp;
  }
  if (a > b){
    double tmp = a;
    a = b;
    b= tmp;
  }
}
void sort_three_nums(double&, double&, double&);
int main(){
  // TODO
  double a, b, c;
  cout << "Input three numbers: ";
  cin >> a >> b >> c;

  cout << a <<"," << b << "," << c << endl;
  sort_three_nums(a, b , c);
  cout << a <<"," << b << "," << c << endl;
  //cout << "Before:" << a << "+" << b << "=" << add(a, b)<< endl;
  //cout << sort_three_nums(a, b, c);
  //cout << "After" << a << "," << b << "," << c << endl;
  cout << printCountTo10();
  return 0;
}