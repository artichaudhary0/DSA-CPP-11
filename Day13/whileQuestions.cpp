#include<iostream>
using namespace std;

/*
sum of first natural no. 
i.e 1 2 3 4 5 6 7 8 9 10 ... - 20

0 + 1 = 1 =>  1 + 2 => 3 + 3 => 6 + 4 => 10 + 5 = 15 + 6 => 21 ... 

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

check prime number : 

fibonacci series

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

    // int fact = 5 ,product = 1; 

    // while( fact >= 1)
    // {
    //     product = product * fact;
    //     fact -- ;
    // }

    // cout<<product;
    
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


    // reverse a number , count digits in a number 
    /*
        original    reverse
        211424   => 424112
    */

    // int num = 211424,rev = 0,count = 0;
    // // to get last value use number (%10)

    // while(num > 0) // update ?
    // {

    //     rev =  rev*10 + num%10;
    //     count++;
    //     num = num/10 ;  
        
    //     /*
    //         step 1 : num = 211424 , rev = 0 , count = 0
            
    //         loop 1 : 
    //             step 2 : 211424 > 0 true
    //             step 3 : 
    //                 1 ) rev = rev*10 + num%10 => 0*10 + 211424%10 => 0 + 4 => 4
    //                 2 ) count++ => 1
    //             step 4 : num = num/10 => num = 21142

    //         loop 2 : 
    //             step 2 : 21142 > 0 true
    //             step 3 : 
    //                 1 ) rev = rev*10 + num%10 => 4*10 + 21142%10 => 40 + 2 => 42
    //                 2 ) count++ => 2
    //             step 4 : num = num/10 => 2114
                
    //         loop 3 : 
    //             step 2 : 2114> 0 true
    //             step 3 : 
    //                 1 ) rev = rev*10 + num%10 => 42*10 + 2114%10 => 420 + 4 => 424
    //                 2 ) count++ => 3
    //             step 4 : num = num/10 => 2114/10 => 211
            
    //         loop 4 : 
    //             step 2 : 211 > 0 yes
    //             step 3 : 
    //                 1 ) rev = rev*10 + num%10 => 424*10 + 211%10=> 4240 + 1 => 4241    
    //                 2 ) count++ => 4
    //             step 4 : num = num/10 => 21
            
    //         loop 5 : 
    //             step 2 : 21 > 0 
    //             step 3 : 
    //                 1 ) rev = rev*10 + num%10 => 4241*10 + 21%10 => 42410 + 1=> 42411
    //                 2 ) count++ => 5
    //             step 4 : num = num/10 => 2
            
    //         loop 6 : 
    //             step 2 : 2 > 0 true 
    //             step 3 : rev = rev*10 + num%10 => 42411*10 + 2%10=> 424110 + 2 => 424112
    //             2 ) count++ => 6
    //             step 4 : num = num/10=> 0
            
    //         loop 7 : 
    //             STEP 2 : 0>0 FALSE
    //             EXIT    
    //     */
    // }
   
    // cout<<rev<<endl;
    // cout<<count<<endl;

    // check pallindrom , 11223332211

    // int num = 1253521,rev = 0,count = 0;
    // // to get last value use number (%10)
    // int orginal = num ;

    // while(num > 0) 
    // {

    //     rev =  rev*10 + num%10;
    //     count++;
    //     num = num/10 ;  
    // }
   
    // if(orginal == rev)
    // {
    //     cout<<"pallindrom";
    // }else{
    //     cout<<"Not pallindrom";
    // }
    


    // sum of digits : 
    // int num = 123,sum = 0;


    // while(num > 0) 
    // {

    //     sum = sum + num%10;
    //     num = num/10 ;  

    //     /*
    //     step 1 : num = 123 , sum = 0 

    //         loop 1 :
    //         step 2 : num>0 true
    //         step 3 : sum = sum + num%10 => sum = 0 + 3 => 3
    //         step 4 : 12
            
    //         loop 2 :
    //         step 2 : num>0 true
    //         step 3 : sum = sum + num%10 => 3 + 2 => 5
    //         step 4 : 1

    //         loop 3 :
    //         step 2 : num>0 true
    //         step 3 : sum = sum + num%10 => 5 + 1 => 6
    //         step 4 : 0

    //         loop 4 : exit

        
    //     */
    // }
   
    // cout<<sum;


    // int num ;
    // cout<<"Enter number : ";
    // cin>>num;
    // // 2 % 2 => 0 prime no.

    // // 3 % 2 => 1  prime no.
    // // 3 % 3 => 0

    // // 4  % 2 => 0 not a prime no.
    // // 4  % 3 => 1
    // // 4  % 4 => 0

    // // 5 % 2 => 1 prime no.
    // // 5 % 3 => 2
    // // 5 % 4 => 1
    // // 5 % 5 => 0


    // // 10 % 2 => 0
    // // 10 % 3 => 1
    // // 10 % 4 => 2
    // // 10 % 5 => 0
    // // 10 % 6 => 4
    // // 10 % 7 => 3
    // // 10 % 8 => 2
    // // 10 % 9 => 1
    // // 10 % 10 => 0

    // // 15 % 2 => 1
    // // 15 % 3 => 0
    // // 15 % 4 => 3
    // // 15 % 5 => 0
    // // 15 % 6 => 3
    // // 15 % 7 => 1
    // // 15 % 8 => 7
    // // 15 % 9 => 6
    // // 15 % 10 => 5
    // // 15 % 11 => 4
    // // 15 % 12 => 3
    // // 15 % 13 => 2
    // // 15 % 14 => 1
    // // 15 % 15 => 0

    // int i = 2 ;
    // // bool isPrime = false;
    // int count = 0;

    // while(i< num/2){

    //     if(num % i == 0)
    //     {
    //         count ++;
    //     }
    //     i++;
    // }

    // if(count == 0)
    // {
    //     cout<<"prime";
    // }else{
    //     cout<<"Not prime";
    // }


    // fibonacci : 

    int firstTerm ;
    int secondTerm ;
    int nextTerm ;
    int n , i = 1 ;

    cout<<"Enter first term : ";
    cin>>firstTerm;
    cout<<"Enter Second term : ";
    cin>>secondTerm;

    cout<<"Enter no. upto which you want to print series : ";
    cin>>n;

    while(i<= n){
        cout<<firstTerm<<" ";
        nextTerm = firstTerm + secondTerm;
        firstTerm = secondTerm;
        secondTerm = nextTerm;
        i++;
    }
}