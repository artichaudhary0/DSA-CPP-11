#include<iostream>
using namespace std;

/*
Ternary Operator :
    condition ? true : false ;

*/

int main()
{

    // if(10>40)
    // {
    //     cout<<10-40; // true
    // }else{
    //     cout<<40-10; // false
    // }
    // 10 > 40 ? cout << 10-40 : cout <<40-10 ;

    int score ;
    char grade ;

    cout<<"Enter your score : ";
    cin>>score;

    /* ternary operator :  
        A(90-100) B(80-89) C(70-79) D(60-69) E(50-59) F(0-49)
    */
    (score>=0 && score<=100) // valid range
    ? (score<=100 && score>=90) 
        ? grade = 'A', cout<<"Your grade is A"<<endl
        : (score <90 && score>=80) 
            ? grade = 'B',cout<<"Your grade is B"<<endl
            : (score <80 && score>=70)
                ?grade = 'C',cout<<"Your grade is C"<<endl
                : (score <70 && score>=60)
                    ?grade = 'D',cout<<"Your grade is D"<<endl
                    : (score <60 && score>=50)
                        ? grade = 'E',cout<<"Your grade is E"<<endl
                        : (score <50 && score>=0)
                            ? grade = 'F',cout<<"Your grade is F"<<endl
                            : cout<<""
    : cout<<"You have entered invalid scroe"<<endl ;


    switch (grade)
    {
    case 'A':
        cout<<"Excellent Work!"<<endl;
        break;
    case 'B':
        cout<<"Well done!"<<endl;
        break;
    case 'C':
        cout<<"Good Job"<<endl;
        break;
    case 'D':
        cout<<"You have passed but you could do better"<<endl;
        break;
    case 'E':
        cout<<"Just passed the exam"<<endl;
        break;
    case 'F':
        cout<<"Sorry you failed"<<endl;
        break;
    default:
        break;
    }




    if(grade>= 'A' && grade <='E')
    {
        cout<<"Congo.";
    }else{
        cout<<"Better luck next time";
    }


}