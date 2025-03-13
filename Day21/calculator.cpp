#include<iostream>
using namespace std ;

void addition(float,float);
void subtraction(float,float);
void multiplication(float,float);
void division(float,float);
void remainderr(int,int);

int main()
{
    

    while(true){ // constant statement
    
        int choice ;
        float num1 , num2;
        cout<<"Press 1 for +"<<endl;
        cout<<"Press 2 for -"<<endl;
        cout<<"Press 3 for *"<<endl;
        cout<<"Press 4 for /"<<endl;
        cout<<"Press 5 for %"<<endl;
        cout<<"Press 0 for exit"<<endl;
        cout<<"Enter your choice : "<<endl;
        cin>>choice;
    
        if(choice == 0 )
        {
            cout<<"Exiting";
            break;
        }
    
        cout<<"Enter num1 : ";
        cin>>num1;
        cout<<"Enter num2 : ";
        cin>>num2;
        
        switch(choice)
        {
            case 1 : 
                addition(num1,num2);
                break;
            case 2 : 
                subtraction(num1,num2);
                break;
            case 3 : 
            multiplication(num1,num2);
                break;
            case 4 : 
                if(num2 == 0)
                    {
                        cout<<"Num. can not divide by 0";
                        break;
                    }
                division(num1,num2);
                break;
            case 5 : 
                if(num2 == 0)
                    {
                        cout<<"Num. can not divide by 0";
                        break;
                    }
                remainderr(num1,num2);
                break;
            default : 
                cout<<"Invalid"<<endl;
                break;
                
        }
            
        }

    return 0;
}


// TAKE(Parameter) Something RETURN(return value) NOTHING.
void addition(float num1 , float num2)
{
    cout<<"Addition of "<<num1 << " "<<num2 <<" : "<<num1 + num2<<endl;
}

void subtraction(float num1 , float num2)
{
    cout<<"Subtraction of "<<num1 << " "<<num2 <<" : "<<num1 - num2<<endl;
}

void multiplication(float num1 , float num2)
{
    cout<<"Multiplication of "<<num1 << " "<<num2 <<" : "<<num1 * num2<<endl;
}

void division(float num1 , float num2)
{
    cout<<"Division of "<<num1 << " "<<num2 <<" : "<<num1 / num2<<endl;
}

void remainderr(int num1 , int num2)
{
    cout<<"Remainder of "<<num1 << " "<<num2 <<" : "<<num1 % num2<<endl;
}