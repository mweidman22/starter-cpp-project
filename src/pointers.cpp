#include <iostream>
using namespace std;
//Class members are private by default and structs are public by default
/*class Account{
    public: // make a class members public instead of private. 
    int number;
    string type;
    private: // this makes balance private but everything above is public. cannot be accessed outside of the class. VoidPrintAccount is outside of the class.
    double balance;
};*/
class Account{ // this makes the data private but printing function is public.
    int number;
    string type;
    double balance;
    public:
    // Account(int number, string type, double balanace){
    //     this->number = number;
    //     this->type = type;
    //     this->balance= balance;
    // }
    //Account(int number, string type, double balance):number(number),type(type),balance(balance){}
    Account(int num, string t, double b) : number(num), type(t), balance(b) {} // constructor
    void printAccount(){
        cout<< number << ", " << type << ", " << balance << endl;
    }
};
//struct Account{
  //  int number;
   // string type;
    //double balance;
//};
//void printAccount(Account a){
  //  cout <<a.number << ", " << a.type << ", " << a.balance << endl;
//}
//void printAccount(Account* a){
  //  cout <<a->number << ", " << a->type << ", "<< a->balance << endl; //pointers require arrows
//}
int main(){
    Account ac1{123, "Checking" , 100.0};
    ac1.printAccount();
    //printAccount(ac1);

    //Account* ptr = &ac1;
    //printAccount(ptr);

    //printAccount(&ac1);
    int num = 100;
    int& another_name_for_num = num;
    //cout << num << " " << another_name_for_num << endl;
    //cout << "Address of num: "<< &another_name_for_num << endl;
    //cout << "Value at " << &num << " is " << *(&num)<< endl;
    int list[] {4, 8, 12, 16};
    //int* ptr = list;
    /*for (int i = 0; i < 4; i++){
        //cout<< list[i] <<endl; //print the list as an array.
        cout << ptr + i <<endl; // addresses. lists the address location
        //cout << *(ptr + i) << endl; //dereferenced giving the number list.
        //cout << *(list + i) << endl; //displays the value within the array.
    }
    char* ch = nullptr; //nullptr means we are referencing nothing.
    /*for (int i = 0; i < 4; i++){
        cout<< *ch << *(list + i) <<endl; //DONT DO THIS! THIS SHOULD CAUSE ERRORS! Segmentation fault means misused pointer!
    }*/
    float number { 2.3f}; //static memory
    float* number2 = new float; // dynamic memory
    delete number2; // have to delete it when you're done
    return 0;
}
