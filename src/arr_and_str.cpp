#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <array>
#include <random>
using namespace std;

int main(){
    //C-style arrays

    int odd_numbers[20];
    //double pi = 3.14 or double pi [3.14]
    string days[] {
        "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"
    };
    double array_of_num_arrays[5][2]{
        {2, 4},
        {1, 7},
        {1, 0},
        {5, 7},
        {8, 10},
    };
    for (int k = 0; k < 5; k++){
        for(int j = 0; j < 2; j++){
            cout << array_of_num_arrays[k][j] << endl;
        }
    }
    for(int i = 0; i < 7; i++){
        cout<<setw(12) << days[i]<< setw(2) << i <<endl;
    };
    for(string day : days){
        cout << day << endl;
    }
   // cout << days[2] <<endl;
   //c++ style arrays
   array<int, 5> arr {2, 6, 8, 9};
   for(int i = 0; i < arr.size(); i++){
    cout<< arr[i]<< " , " <<arr.at(i) << endl;
   }
   vector<string> week_days;
   week_days.push_back("Mon");
   week_days.push_back("Tues");
   week_days.push_back("Wed");
   week_days.push_back("Thu");
   week_days.push_back("Fri");
   for(int i = 0; i < week_days.size(); i++){
    cout << /*week_days[i] << " , " <<*/ week_days.at(i) << endl;
   }
   string name ("Joe"); // c++ style
   int age (24);
   //char name1[] = "Emily"; // C-style
   cout << name + " is a " + to_string(age) + " years old student." << endl;
   string msg = "To be or not to be!";
   for(char ch : msg){
    cout << ch << " ";









































































   }
   cout << endl << endl;
   // Game of guessing missing characters
   default_random_engine en;
   uniform_int_distribution<> dist(0, msg.size() - 1);
   for (int i = 0; i < msg.size(); i++){
    int ndx = dist(en);
    cout << msg.at(ndx);
   }
   cout << endl << endl;
   uniform_int_distribution<> on_off (0, 1);
   for(char ch : msg){
    // if (on_off(en) == 1){
    //     cout << ch;
    // } else {
    //     cout<< "_";
    // }
    cout << ((on_off(en) == 1) ? ch : ' ');
   }
   cout << endl;
    return 0;
};