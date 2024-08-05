# Experiment-05
## Aim:To study and implement C++ decision making statements.
## Thoery: 
If ,else if , and else} are basic decision-making statements in C++ that are used to regulate a program's flow based on conditions. Expressions that return Boolean values (true or false) are evaluated by these statements. If the condition is true, a block of code is executed by the ifexpression. In case the previousifwas false, aelse ifstatement is used to verify another condition after theif. If any of the conditions listed above are false, a block of code is executed by the else` expression. Because of these components, branching logic is possible, enabling the program to make decisions and run various code paths on demand. When decision-making statements are used effectively, they explicitly define many execution scenarios based on changing conditions, improving program flexibility, readability, and maintainability.

## Code:
```
//Ashu Yadav
//23070123154
#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"if-else ladder"<<endl;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"Enter the third number: ";
    cin>>c;
// if-elif-else ladder
    if ((a>b) && (a>c))
    {
        cout<<"First number is the largest."<<endl;
    }

    else if ((b>a) && (b>c))
    {
        cout<<"Second number is the largest."<<endl;
    }

    else
    {
        cout<<"Third number is the largest."<<endl;
    }
    cout<<endl;
    cout<<endl;

//nested if
    cout<<"nested if"<<endl;
     if ((a>b) && (a>c))
    {
        if (b>c)
        cout<<"Sum of first and second number: "<<a+b<<endl;
        else
        cout<<"Sum of first and third number: "<<a+c<<endl;
    }
    else if ((b>a) && (b>c))
    {
        if (a>c)
        cout<<"Subtraction of second and first number: "<<b-a<<endl;
        else
        cout<<"Subtraction of second and third number: "<<b-c<<endl;
    }
    else
    {
        if (a<b)
        cout<<"Product of third and first number: "<<c*a<<endl;
        else
        cout<<"Product of third and second number: "<<c*b<<endl;
    }

    cout<<endl;
    cout<<endl;
    //switch case
    cout<<"switch case"<<endl;
    int ch;
    float ans;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"Press 1 for addition."<<endl;
    cout<<"Press 2 for subtraction. "<<endl;
    cout<<"Press 3 for multiplication. "<<endl;
    cout<<"Press 4 for division"<<endl;
    cout<<"Enter your choice: ";
    cin>>ch;

    switch (ch)
    {
    case 1:
    {
        ans = a + b;
        cout<<"Sum: "<<ans;
        break;
    }

    case 2:
    {
        ans = a - b;
        cout<<"Subtraction: "<<ans;
        break;
    }
    
    case 3:
    {
        ans = a * b;
        cout<<"Product: "<<ans;
        break;
    }

        case 4:
    {
        ans = a / b;
        cout<<"Division "<<ans;
        break;
    }

    default:
    {
        cout<<"INVALID INPUT";
    }
        break;
    }
}
```
## Output:

![exp5](https://github.com/ashuydv-05/Experiment-05/blob/main/5th%20f.png)
## Conclusion:
We learnt about conditional statements which include if else, else if and nested conditional statements and switch case and their use case.
