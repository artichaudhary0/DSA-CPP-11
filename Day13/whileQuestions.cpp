#include<iostream>
using namespace std;

/*
sum of first natural no. 
i.e 1 2 3 4 5 6 7 8 9 10 ... - 20

0 + 1 = 1 =>  1 + 2 => 3 + 3 => 6 + 4 => 10 +5 = 15 +6 => 21 .... 

starting point : 1
end/start point : 20
flow : i++ i => i + 1

sum = 0 
sum = sum + i => 0 + 1 = 1
sum = sum + i => 1 + 2 => 3
sum = sum + i => 3 + 3 => 6


product of first natural no.

1 * 1 = 1 =>  1 * 2 => 2 * 3 => 6 * 4 => 24 * 5 = 120 * 6 => 720

reverse a number 

check pallindrom

factorial of a no. 
    num = 5 => 0! => 1
    fact : 5 * 4 * 3 * 2 * 1

    starting point : 5
    end point : 1
    flow : decrement



count digits in a number

sum of digits

check prime number

fibonacci series

gcd of two numbers. 
*/

int main()
{
    // sum of first natural no. 1 start infinite

    // starting point : 1
    // end/start point : 20
    // flow : i++ i => i + 1

    // sum = 0 
    // sum = sum + i => 0 + 1 = 1
    // sum = sum + i => 1 + 2 => 3
    // sum = sum + i => 3 + 3 => 6

    // int i = 1 ; 
    // int sum = 0 ;

    // while (i <= 5)
    // {

    //     sum = sum + i ;
    //     i++;
    // }

    // cout<<sum ;
    
    /*
        Dry run : 
            step 1 : init : i = 1 , sum = 0
            
            loop 1 : 
                step 2 : i <= 5 (1 <= 5) true
                step 3 : 
                    P(0 + 1) 
                    sum = sum + i => 0 + 1 => sum = 1
                step 4 : i++ => 2
                
            loop 2 : 
                step 2 : (2 <=5 ) true
                step 3 : 
                    p( 1 + 2)
                    sum = sum +  i => 1 + 2 => 3
                step 4 :i ++ => 3
                
            loop 3 : 
                step 2 : 3 <=5 true
                step 3 : 
                    p(3 + 3)
                    sum = sum + i = 3 + 3=> 6
                step 4 : i++ => 4 
            
            loop 4 : 
                step 2 : 4 <= 5
                step 3 : 
                    p(6 + 4)
                    sum = sum+i => 6 + 4 => 10
                step 4 : i++ => 5
                
            loop 5 : 
                step 2 : 5 <= 5 true
                step 3 : 
                    p(10 + 5)
                    sum = sum + i => 10 + 5 => 15
                step 4 : i++=> 6
            
            loop 6 : 
                step 2 : 6 <= 5 false
                    exit        
    */
    

    
    // product of first natural no.

    // int i = 1 ; 
    // int product = 1 ;

    // while (i <= 6)
    // {
    //     cout<<product<<" * "<<i<<"=>"<< " ";
    //     product = product * i ;
    //     i++;
    // }
    
    // cout<<product ;
    

    // factorial of a no. 
    // num = 5 => 0! => 1
    // fact : 5 * 4 * 3 * 2 * 1

    // starting point : 5
    // end point : 1
    // flow : decrement

    int fact = 5 ,product = 1; 

    while( fact >= 1)
    {
        product = product * fact;
        fact -- ;
    }

    cout<<product;
    
    /*
        step 1 : fact = 5 , product = 1
        
        loop 1 : 
            step 2 : fact >=1 5 >=1 true
            step 3 : product = prod*fact => 1 *5 =>5
            step 4 : fact-- => 4
            
        loop 2 : 
            step 2 : 4 >= 1 true
            step 3 : product = prod * fact => 5 *4 => 20 = product
            step 4 : fact--=> 3
        
        loop 3 : 
            step 2 : 3 >=1
            step 3 : prod = prod*fact => 20*3=> 60
            step 4 : fact--=> 2
        
        loop 4 : 
            step 2 : 2 >=1
            step 3 : prod = prod*fact => 60*2 => 120
            step 4 : fact-- => 1
        
        loop 5 : 
            step 2 : 1>=1 true
            step 3 : prod  => 120 *1 => 120
            step 4 : fact -- => 0
            
        loop 6 : 
            step 2 : 0>=1 false
            
    
    */

}