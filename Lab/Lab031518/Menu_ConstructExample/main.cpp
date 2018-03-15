/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char choice;
    
    //Input or initialize values Here
    cout<<"Choose from the following Menu"<<endl;
    cout<<"Type 1 for Independent-If example"<<endl;
    cout<<"Type 2 for Dependent-If example"<<endl;
    cout<<"Type 3 for Ternary Op example"<<endl;
    cout<<"Type 4 for Switch-Case example"<<endl;
    cin>>choice;
    
    
    //Process/Calculations Here
    if(choice>='1'&&choice<='4')(
            switch(choice)(
                    case'1':(
                    cout<<"Independent-If Example"<<endl;
                    float hrsWrkd,payRate,payChk;
                    cout<<"This Program calculates your paycheck"<<endl;
                    cout<<"Input the hours you worked for the week"<<endl;
                    cout<<"and your Pay Rate $'s/hr"<<endl;
                    cin>>hrsWrkd>>payChk;
                    
                    
                    if(hrsWrkd>=0&&hrsWrkd<=40)(
                            payChk=hrsWrkd*payRate;
                    )else(
                            payChk=hrsWrkd*payRate+(hrsWrkd-40)*payRate;
                    )
                            
                    cout<<"Hours Worked = "<<hrsWrkd<<endl;
                    cout<<"Pay Rate = $"<<payRate<<"/hr"<<endl;
                    cout<<"Pay Check = $"<<payChk<<endl;
                    break;
                    )
                    case'2':(
                            cout<<"Dependent-If Example"<<endl;
                    break;
                    )
                    case'3':(
                            cout<<"Ternary Op Example"<<endl;
                    break;
                    )
                    case'4':(
                            cout<<"Switch-case Example"<<endl;
                    break;
                    )
                        )    
    //Output Located Here
else(
            cout<<"Exiting Menu"<<endl;
    )
    //Exit
    return 0;
}

