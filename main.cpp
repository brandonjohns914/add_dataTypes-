//
//  main.cpp
//  lab2
//
// Brandon Johns
//  2/6/18.
//  Copyright © 2018 Brandon Johns. All rights reserved.
//

#include <iostream>
using namespace std;

int Iadd(int num1, int num2); // ints
double Dadd(double num1, double num2); // doubles
string Sadd( string num1, string num2); // string


int Iadd(int num1, int num2) // definition
{
    int number=0; // int
    number= num1+num2;// adding the parameters
    return number;// returning the int
}

double Dadd(double num1, double num2)// definition
{
    double number=0; // double
    number= num1+num2; // adding double
    return number;// returning double
    
}
string Sadd( string num1, string num2) // string
{
    string sentence;
    string s=num1;
    string t= num2;
    sentence= s+t;
    return sentence;
}

void get(int data[5])
{
    
    for(int i=1;i<=5;i++)
    {
        cout<<"Percentage "<<i<<": ";
        cin>>data[i-1];
    }
}

void print(int data[5])
{
    for(int i=1;i<=5;i++)
    {
        cout<<data[i-1]<<"\t";
    }
    
}

int best(int data[5])
{
    int max = data[0];
    
    for(int i=1;i<5;i++)
    {
        if(max<data[i])
        {
            max = data[i];
        }
    }
    return max;
}

int worst(int data[5])
{
    int min = data[0];
    for(int i=1;i<5;i++)
    {
        if(min>data[i])
        {
            min = data[i];
        }
    }
    return min;
}

float avg(int data[5])
{
    int sum = 0;
    for(int i=0;i<5;i++)
    {
        sum += data[i];
    }
    
    return sum/5.0;
}


int main()
{
    
    cout<< "Double or Int or String? enter D for double, I for int , S for string: "<< endl <<": "; /// asking user to enter I D OR S
    string userchoice;
    cin>> userchoice;
    
    if(userchoice == "D")
    {
        double Dnumber1=0; /// getting first double
        double Dnumber2=0; /// getting second dounle
        cout<<"please enter a number followed by a decimal "<< endl; //// asking for user input
        cin>> Dnumber1;
        cout<<"please enter a number followed by a decimal "<<endl; //// asking for user input
        cin>> Dnumber2;
    
        cout << Dadd(Dnumber1, Dnumber2)<<endl; //// looking at function
    }
    else if(userchoice == "I")
    {
        int Inumber1=0; /// getting first int
        int  Inumber2=0;/// getting first int
        cout<<"please enter a number"<< endl;//// asking for user input
        cin>> Inumber1;
        cout<<"please enter a number"<<endl;//// asking for user input
        cin>> Inumber2;
        
        cout << Iadd(Inumber1, Inumber2)<<endl;//// looking at function
    }
    
    else if(userchoice == "S")
    {
        string string1 ; /// getting first string
        string string2 ;/// getting first string
        cout<<" please enter a phrase"<< endl;//// asking for user input
        cin>> string1;
        cout<<" please enter a phrase"<<endl;//// asking for user input
        cin>> string2;
        
        cout << Sadd(string1, string2)<<endl;//// looking at function
    }
    else
    {
        cout<< "that was not an option" <<endl;
    }
    cout<<"************************************************************************"<<endl;
    
    
    
    //// declaring
    char charArr[10];

    cout<<"Enter 10 Characters:"<<endl;
    
    int i;
    //READING CHARACTERS
    for( i=0; i<10; i++)
    {
        cin>>charArr[i];
        //CHECKING FOR PUNCTAUTION MARK AND BREAK WHEN IT IS EXIST
        if(charArr[i]=='.'||charArr[i]=='?'||charArr[i]==',')
        {
            break;
        }
    }
    
    //PRINTING CHAR ARRAY IN REVERSED
    for(int j=i-1; j>=0; j--)
    {
        
        cout<<charArr[j];
    }
    
    
    
    cout<<"************************************************************************"<<endl<<endl;

    

        int lab[5];
        int hw[5];
        int k;
        int average[k];
        
        cout<< "homework percentage"<<endl;
        get(hw);
        cout<< "lab percentage"<<endl;
        get(lab);
        
        cout<<"\t1\t2\t3\t4\t5"<<endl;
        
        cout<<"\nHW\t";
        print(hw);
        cout<<"BEST HW: "<<best(hw)<<" WORST Homework: "<<worst(hw)<<" AVG HW: "<<avg(hw)<<endl;
        
        cout<<"LAB\t";
        print(lab);
        cout<<"BEST LAB: "<<best(lab)<<" WORST LAB: "<<worst(lab)<<" AVG LAB: "<<avg(lab)<<endl;
        
        cout<<"\n\nAVG\t";
    
        /// finds the average
        for(i=0;i<5;i++)
        {
            average[i] = (hw[i]+lab[i])/2.0;
        }
    
        print(average);
        cout<<"OVERALL: "<<avg(average)<<endl;
    
        //// prints out answer basesd on avrage
        if(avg(hw)<50)
        {
        cout<<"I'm sorry to inform you that you failed the class, because your performance in hw was <50%. Try again next semester\n";
        }
    
        else if(avg(lab)<50)
        {
            cout<<"I'm sorry to inform you that you failed the class, because your performance in lab was <50%. Try again next semester\n";
        }
        else
        {
        cout<<"Congratulations! You passed the class!\n";
        }
 
    
    cout<<"************************************************************************"<<endl;
    

    return 0;
}


/*
 Double or Int or String? enter D for double, I for int , S for string:
 : S
 please enter a phrase
 hello
 please enter a phrase
 brandon
 hellobrandon
 ************************************************************************
 Enter 10 Characters:
 brandon.
 nodnarb************************************************************************
 
 
 For homework enter percentage for each sets
 Enter percentage: 1 : 100
 Enter percentage: 2 : 90
 Enter percentage: 3 : 80
 Enter percentage: 4 : 70
 Enter percentage: 5 : 60
 
 
 For lab enter percentage for each sets
 Enter percentage: 1 : 50
 Enter percentage: 2 : 40
 Enter percentage: 3 : 30
 Enter percentage: 4 : 20
 Enter percentage: 5 : 10
	1	2	3	4	5
 
 HW	100	90	80	70	60	BEST HW: 100 WORST HW: 60 AVG HW: 80
 LAB	50	40	30	20	10	BEST LAB: 50 WORST LAB: 10 AVG LAB: 30
 
 
 AVG	75	65	55	45	35	OVERALL: 55
 I'm sorry to inform you that you failed the class, because your performance in lab was <50%. Try again next semester
 ************************************************************************
 Program ended with exit code: 0
 
 
 
 
 
 
 
 
 
 
*/
















