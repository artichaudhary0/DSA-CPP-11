/*
    loop : repeated part 

        Type of loop : 
            1 : Entry control
                1 : while loop
                2 : for loop
            2 : Exit control 
                3 : do-while

        loop requirement : 
            1 : initilization (start)
            2 : condition (stop)
            3 : flow (increment / decrement) 

    Total loop iteration : n(true condition) + 1(false condition)        

    while loop : 
    syntax : 
        inital state
        while (condition)
        {         
            statement 
            flow 
        }      
*/

#include<iostream>
using namespace std;

int main()
{

    /*
            1 : initilization (start)
            2 : condition (stop)
            3 : flow (increment / decrement) 
    */

    int num = 1 ; // even value : num % 2  == 0
    while( num <= 10) 
    {
        if(num % 2 == 0)
        {
            cout<<num<<" ";
        }
        num = num + 1;
    }
    
    /*
        Dry Run : 
        1 2 3 4 5 6 7 8 9 10 start 1 , stop 10 
        step 1 : initilization  i = 1
        
        loop 1 : 
        step 2 : i <= 10 => 1 <= 10 true
        step 3 : 
            if(num % 2 == 0) => 1 % 2 == 0 => 1 false
        step 4 : i++ => 2
        
        loop 2 : 
        step 2 : i <= 10 , 2<=10 true
        step 3 : 
                if 2 % 2 == 0 => true 
                    P(i) => P(2)
        step 4 : i++ => 3
        
        loop 3 : 
        step 2 : i <=10 , 3 <= 10 true
        step 3 : 
            if(3%2 == 0) 1 == 0 false
        step 4 : i++ => 4
        
        loop 4 : 
        step 2 : i <= 10 4 <=10 true
        step 3 : 
                if 4 % 2 == 0 => true 
                    P(i) => P(4)
        STEP 4 : i++ => 5
        
        loop 5 : 
        step 2 : i <=10 , 5 <= 10 true
        step 3 : 
            if(5%2 == 0) 1 == 0 false
        step 4 : i++ => 6
        
        
        loop 6 : 
        step 2 : i <= 10 6 <=10 true
        step 3 : 
                if 6 % 2 == 0 => true 
                    P(i) => P(6)
        STEP 4 : i++ => 7
        
        loop 7 : 
        step 2 : i <=10 , 7 <= 10 true
        step 3 : 
            if(7%2 == 0) 1 == 0 false
        step 4 : i++ => 8
        
        loop 8 : 
        step 2 : i <= 10 8 <=10 true
        step 3 : 
                if 8 % 2 == 0 => true 
                    P(i) => P(8)
        STEP 4 : i++ => 9
        
        
        loop 9 : 
        step 2 : i <=10 , 9 <= 10 true
        step 3 : 
            if(9%2 == 0) 1 == 0 false
        step 4 : i++ => 10
        
        loop 10 : 
        step 2 : i <= 10 10 <=10 true
        step 3 : 
                if 10 % 2 == 0 => true 
                    P(i) => P(10)
        STEP 4 : i++ => 11
        
        loop 11 : 
        step 2 : 11 <= 10 false
        exit
    */

    int num = 5 ; // 5 4 3 2 1 
    
    while( num >=  1) 
    {
        cout<<num<<" ";
        num = num --; // num -- ; 
    }

    /*
        step 1 : num = 5

        loop 1 : 
        step 2 : num >= 1 (5 >=1) true
        step 3 : P(5)
        step 4 : num = 4

        loop 2 : 
        step 2 : num>= 1 ( 4 >=1 ) true
        step 3 : P(4)
        step 4 : num = 3

        loop 3 : 
        step 2 : num>= 1 ( 3 >=1 ) true
        step 3 : P(3)
        step 4 : num = 2

        loop 4 : 
        step 2 : num>= 1 ( 2 >=1 ) true
        step 3 : P(2)
        step 4 : num = 1

        loop 5 : 
        step 2 : num>= 1 ( 1 >=1 ) true
        step 3 : P(1)
        step 4 : num = 0

        loop 6 : 
        step 2 : 0 >= 1 false
        exit
    
    */

}