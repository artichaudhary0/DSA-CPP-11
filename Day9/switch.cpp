#include<iostream>
using namespace std ;

/*
    keyword : 


    switch(choice)
    {
        case 1 : 
            break ;
        case 2 : 
            break ;
        .
        .
        .
        default :
            break ;        
    }


*/

int main()
{

    // int choice ;
    // cout<<"Select your gender :"<<endl;
    // cout<<"Press 1 for Female"<<endl;
    // cout<<"Press 2 for Male"<<endl;
    // cout<<"Press 3 for Others"<<endl;
    // cout<<"Enter your choice : ";
    // cin>>choice;

    // switch(choice) // 'A' = 65
    // {
    //     case 'A' : 
    //         cout<<"You have selected Female" ;
    //         break ;

    //     case 2 : 
    //     cout<<"You have selected Male" ;
    //         break;
         
    //     case 3 : 
    //         cout<<"You have selected Others";
    //         break;    

    //     default :
    //         cout<<"Invalid selection";
    //         break;
    // }


    int language ;

    cout<<"Press 1 for English"<<endl;
    cout<<"Press 2 for Hindi"<<endl;
    cout<<"Press 3 for Gujarati"<<endl;
    cout<<"Enter your choice : ";
    cin>>language;
    cout<<endl;

    switch(language)
    {
        case 1: 

            cout<<"Press 1 for Internet Recharge"<<endl;
            cout<<"Press 2 for Top-up Recharge"<<endl;
            cout<<"Press 3 for Special Recharge"<<endl;
            cout<<"Enter your choice : ";
            cin>>language;
            cout<<endl;

            switch (language)
            {
            case 1:
                cout<<"You have successfully done Internet Recharge"<<endl;
                break;
            case 2:
                cout<<"You have successfully done Top-up Recharge"<<endl;               
                break;
            case 3:
                cout<<"You have successfully done Special Recharge"<<endl;
                break;
            
            default:
            cout<<"You have selected invalid option"<<endl;
                break;
            }


            break;

        case 2 : 
            cout<<"Internet Recharge ke liye 1 dabaiye"<<endl;
            cout<<"Top-up Recharge ke liye 2 dabaiye"<<endl;
            cout<<"Special Recharge ke liye 3 dabaiye"<<endl;
            cout<<"Enter your choice : ";
            cin>>language;
            cout<<endl;

            switch (language)
            {
            case 1:
                cout<<"Aapne safalatapurvak Internet Recharge kar liya hai"<<endl;
                break;
            case 2:
                cout<<"Aapne safalatapurvak Top-up Recharge kar liya hai"<<endl;               
                break;
            case 3:
                cout<<"Aapne safalatapurvak Special Recharge kar liya hai"<<endl;
                break;
            
            default:
            cout<<"You have selected invalid option"<<endl;
                break;
            }

            break;

        case 3 : 
            cout<<"Internet Recharge mate 1 dabavo"<<endl;
            cout<<"Top-up Recharge mate 2 dabavo"<<endl;
            cout<<"Special Recharge mate 3 dabavo"<<endl;
            cout<<"Enter your choice : ";
            cin>>language;
            cout<<endl;

            switch (language)
            {
            case 1:
                cout<<"Tame safalatapurvak Internet Recharge Karyu chhe"<<endl;
                break;
            case 2:
                cout<<"Tame safalatapurvak Top-up Recharge Karyu chhe"<<endl;               
                break;
            case 3:
                cout<<"Tame safalatapurvak Special Recharge Karyu chhe"<<endl;
                break;
            
            default:
            cout<<"You have selected invalid option"<<endl;
                break;
            }

            break;

        default :
        cout<<"You have selected invalid option"<<endl;
            break ;            
    }
}