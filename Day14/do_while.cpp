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



Exit : 
do-while loop : 

do{
    // statement
    // flow
}while(condition) ;
*/

int main()
{
    // 1 2 3 4 5 6 7 8 9 10
    int start = 1 ;
    int end = 5 ;
    do{
        cout<<start<<endl;
        start++;
    }while(start <= end); // 1 <= 0 false
    
    
    /*
     do{
        cout<<start<<endl;
        start++;
    }while(start <= end);
    
    step 1 : start = 1, end = 5
    
    loop 1 : 
        step 2 : P(S) => 1
        step 3 :  start++ => 2
        step 4 : start <= end => 2 <= 5 true
    
    loop 2 : 
        step 2 :  P(S) => 2
        step 3 : start++ => 3
        step 4 : 3 <= 5 true
    
    loop 3 : 
        step 2 : P(S) => 3
        step 3 :   start++=> 4
        step 4 : 4 <= 5 true
    
    loop 4 : 
        step 2 : P(S) => 4 
        step 3 : start ++ => 5
        step 4 : 5 <= 5 true
    
    loop 5 : 
        step 2 : P(S) => 5 
        step 3 : start ++ => 6
        step 4 : 6 <= 5 false 
        exit
    */
    
    /*
    do{
        cout<<start<<endl;
        start++;
    }while(start <= end);
    
    step 1 : start = 0, end = 5
    
    loop 1 : 
        step 2 : P(S) => 0
        step 3 :  start++ => 1
        step 4 : start <= end => 1 <= 5 true
    
    loop 2 : 
        step 2 :  P(S) => 1
        step 3 : start++ => 2
        step 4 : 2 <= 5 true
    
    loop 3 : 
        step 2 : P(S) => 2
        step 3 :   start++=> 3
        step 4 : 3 <= 5 true
    
    loop 4 : 
        step 2 : P(S) => 3 
        step 3 : start ++ => 4
        step 4 : 4 <= 5 true
    
    loop 5 : 
        step 2 : P(S) => 4 
        step 3 : start ++ => 5
        step 4 : 5 <= 5 true 
    
    loop 6 : 
        step 2 : P(S) => 5
        step 3 : start++ 6
        step 4 : 6 <=5 false 
        exit
    */

    
    /*
    do{
        start++;
        cout<<start<<endl;
    }while(start <= end);
    step 1 : start = 0, end = 5
    loop 1 : 
        step 2 : start++ => 1
        step 3 : P(S) => 1
        step 4 : start <= end => `1 <= 5 true
    
    loop 2 : 
        step 2 : start++ => 2
        step 3 : P(S) => 2
        step 4 : 2 <= 5 true
    
    loop 3 : 
        step 2 : start++=> 3
        step 3 : P(S) => 3
        step 4 : 3 <= 5 true
    
    loop 4 : 
        step 2 : start ++ => 4
        step 3 : P(S) => 4
        step 4 : 4 <= 5 true
    
    loop 5 : 
        step 2 : start ++ => 5
        step 3 : P(S) => 5
        step 4 : 5 <= 5 true 
    
    loop 6 : 
        step 2 : start ++ => 6
        step 3 : P(6)
        step 4 : 6 <=5 false 
        exit
    */
}