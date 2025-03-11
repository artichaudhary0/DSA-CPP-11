// TAKE(Parameter) Something RETURN(return value) NOTHING.
/*
returnType funName(parameter)
{ // function defination
                statement
                return value ; (if and only if returnType is available )
}
void funName(int a , int b)
{ 
// function defination
                statement
}
*/
#include<iostream>
using namespace std ;

//Prototype : returnType functionName(parameter type) ;

void addition(int , int);
void subtraction(int , int);
void multiplication(int , int);
void division(int , int);
void remainder(int , int);
void forLoop(void);
void forLoopEven(void);


int main()
{
    int choice ;
    cout<<"Press 1 for addition\nPress 2 for Subtraction\nPress 3 for multiplication\nPress 4 for Division\nPress 5 for remainder\nPress 6 for For loop iteration\nPress 7 for Even value"<<endl;
    cout<<"Enter your choice : "; 
    cin>>choice;

        if(choice>=1 && choice<=7)
        {
            int num1,num2;
            cout<<"Enter the number 1 : ";
            cin>>num1 ;
            cout<<"Enter the number 2 : ";
            cin>>num2 ;
        
            switch (choice)
            {
            case 1:
                addition(num1,num2);
                break;
            case 2:
                subtraction(num1,num2);
                break;
            case 3:
                multiplication(num1,num2);
                break;
            case 4:
                division(num1,num2);
                break;
            case 5:
                remainder(num1,num2);
                break;
            case 6:
                forLoop();
                break;
            case 7:
                forLoopEven();
                break;
            default:
                cout<<"Invalid choice";
                break;
            }
            }else{
                cout<<"Invalid input";
            }
    return 0;
}


void addition(int num1 , int num2)
{
    cout<<"Addition of "<<num1 << " and "<<num2 << " is : "<<num1 + num2;
}

void subtraction(int num1 , int num2)
{
    cout<<"Subtraction of "<<num1 << " and "<<num2 << " is : "<<num1 - num2;
}

void division(int num1 , int num2)
{
    cout<<"Division of "<<num1 << " and "<<num2 << " is : "<<num1 / num2;
}

void multiplication(int num1 , int num2)
{
    cout<<"Multiplication of "<<num1 << " and "<<num2 << " is : "<<num1 * num2;
}

void remainder(int num1 , int num2)
{
    cout<<"Remainder of "<<num1 << " and "<<num2 << " is : "<<num1 % num2;
}

void forLoop(void)
{
    int array[] = {123,123,1312,21,3,21,321,3,232,1,32,3,21};
    int size = sizeof(array)/sizeof(array[0]);


    for(int i = 0 ; i <size ; i++)
    {
        cout<<"array["<<i<<"] : " <<array[i]<<endl;
    }
}

void forLoopEven(void)
{
    int array[] = {123,123,1312,21,3,21,321,3,232,1,32,32,21};
    int size = sizeof(array)/sizeof(array[0]);


    for(int i = 0 ; i <size ; i++)
    {
       if(array[i] %2 ==0 )
       {
        cout<<"array["<<i<<"] : " <<array[i]<<endl;
       }
    }
}
