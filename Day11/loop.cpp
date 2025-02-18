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

    // 1 2 3 4 5 
    int i = 1 ;  // initial
    while(i<=5) // condition 
    {
        cout<<i<<endl; // statement
        i++; // flow(increment)
    }
    /*
        step 1 : init i = 1
            loop 1 :
                step 2 : condition (i<=5) => 1 <= 5 true Entry yes
                step 3 : cout<<i => P(1)
                step 4 : flow i++ => i = i + 1 => 1 + 1 = 2
            
            loop 2 : 
                step 2 : condition (i<=5) => 2 <= 5 true Entry yes
                step 3 : cout<<i => P(2)
                step 4 : flow i++ => i = i + 1 => 2 + 1 = 3             
        
            loop 3 : 
                step 2 : condition (i<=5) => 3 <= 5 true Entry yes
                step 3 : cout<<i => P(3)
                step 4 : flow i++ => i = i + 1 => 3 + 1 = 4
                
            loop 4 : 
                step 2 : condition (i<=5) => 4 <= 5 true Entry yes
                step 3 : cout<<i => P(4)
                step 4 : flow i++ => i = i + 1 => 4 + 1 = 5
                
            loop 5 : 
                step 2 : condition (i<=5) => 5 <= 5 true Entry yes
                step 3 : cout<<i => P(5)
                step 4 : flow i++ => i = i + 1 => 5 + 1 = 6
            
            loop 6 : 
                step 2 : condition (i<=5) => 6 <= 5 false Entry no
                exit the loop
    */

}