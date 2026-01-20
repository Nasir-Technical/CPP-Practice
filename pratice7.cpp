#include<iostream>

using namespace std;

int main()
{

    int age;
    cout<< "Tell me your Age"<<endl;
    cin>>age;

    // seletion control structure: IF-ELSE leader

    // if ((age<18) && (age>0))
    // {
    //     cout<<"You can not come to my party"<<endl;
    // }
    // else if (age<1)
    // {
    //     cout<<"You are not yet born"<<endl;
    // }
    // else{
    //     cout<<"You can come to my party"<<endl;
    // }
        
        // seletion control structure: switch case statement
        switch (age)
        {
        case 18:
            cout<<"You are 18"<<endl;
            break;
        case 22:
            cout<<"You are 22"<<endl;
            break;    
        case 2:
            cout<<"You are 2"<<endl;
            break;

        default:
        cout<<"No Special Cases"<<endl;
            break;
        }

        cout<<"Done With Switch Case";
    return 0;
}
