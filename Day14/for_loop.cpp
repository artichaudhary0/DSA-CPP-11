#include<iostream>
using namespace std;

/*
sum of first natural no. 
product of first natural no.
reverse a number 
check pallindrom
factorial of a no. 
count digits in a number
sum of digits
check prime number : 
fibonacci series



Entry control :
for loop : 

for(init ; condition ; flow)
{
    // statements
}


*/

int main()
{
    int num ;
    cout<<"Enter number : ";
    cin>>num;

    int count = 0 ;

    // while(num>0)
    // {
    //     num = num/10;
    //     count++;
    // }

    // cout<<"total digit in number are : "<<count<<endl;

    for( ; num > 0 ; )
    {
        num = num / 10;
        count ++ ;
    }
    cout<<"total digit in number are : "<<count<<endl;

    // 1 2 3 4 5 6 7 8 9 10 start
    // for(int i = 1 ; i <= 10 ; i++)
    // {
    //     // statements
    //     cout<<i<<endl;
    // }


    // int i = 1;
    // for( i ; i <= 10 ; i++)
    // {
    //     // statements
    //     cout<<i<<endl;
    // }

    // int i = 1 ;
    // for( ; i <= 10 ; )
    // {
    //     // statements
    //     cout<<i<<endl;
    //     i++;
    // }

}