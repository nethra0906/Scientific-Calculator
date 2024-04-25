#include<iostream>
#include<cmath>
using namespace std;

class calculator{
public:
    float number1;
    float number2;
    void basic_calculator(){
        int choice;
        while(1){
            cout<<"Options:"<<endl;
            cout<<"Click 1. To Add two numbers"<<endl;
            cout<<"Click 2. To Subtract two numbers"<<endl;
            cout<<"Click 3. To Multiply two numbers"<<endl;
            cout<<"Click 4. To Divide two numbers"<<endl;
            cout<<"Click 5. To Calculate square of a number"<<endl;
            cout<<"Click 6. To Calculate square root of a number"<<endl;
            cout<<"Click 7. To Calculate cube of a number"<<endl;
            cout<<"Click 8. To Calculate cube root of a number"<<endl;
            cout<<"Click 0. To Exit the program"<<endl;
            cout<<"Enter your choice"<<endl;
            cin>>choice;
            if(choice==1){
                cout<<"Enter the two numbers:";
                cin>>number1>>number2;
                cout<<"Addition of two numbers is:"<<number1+number2<<endl;
            }
            else if(choice==2){
                cout<<"Enter the two numbers:";
                cin>>number1>>number2;
                cout<<"Subtraction of two numbers is:"<<number1-number2<<endl;
            }
            else if(choice==3){
                cout<<"Enter the two numbers:";
                cin>>number1>>number2;
                cout<<"Multiplication of two numbers is:"<<number1*number2<<endl;
            }
            else if(choice==4){
                cout<<"Enter the two numbers:";
                cin>>number1>>number2;
                cout<<"Division of two numbers is:"<<number1/number2<<endl;
            }
            else if(choice==5){
                cout<<"Enter the number:";
                cin>>number1;
                cout<<"Square of the number is:"<<number1*number1<<endl;
            }
            else if(choice==6){
                cout<<"Enter the number:";
                cin>>number1;
                cout<<"Square root of the number is:"<<sqrt(number1)<<endl;
            }
            else if(choice==7){
                cout<<"Enter the number:";
                cin>>number1;
                cout<<"Cube of the number is:"<<number1*number1*number1<<endl;
            }
            else if(choice==8){
                cout<<"Enter the number:";
                cin>>number1;
                cout<<"Cube root of the number is:"<<cbrt(number1)<<endl;
            }
            else if(choice==0){
                break;
            }
            else {
                cout<<"Invalid choice!"<<endl;
            }
        }
    }
};

int main(){
    calculator ca;
    ca.basic_calculator();
    return 0;
}
