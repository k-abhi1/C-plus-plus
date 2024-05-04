// factorial function with parameter valu with return value fa
// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     int fa=1;
//     for(int i=1;i<=n;i++)
//     {
//         fa=fa*i;
//     }
//     cout<<"Factorial of "<<n<<" is: "<<fa;
//     return 0;
// }

// int factorial_function()
// {
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     int fa=1;
//     for(int i=1;i<=n;i++)
//     {
//         fa=fa*i;
//     }
//     cout<<"Factorial of "<<n<<" is: "<<fa;
//     return fa;
// }

#include<iostream>
using namespace std;

int factorial_function(int n)
{
    int fa=1;
    for(int i=1;i<=n;i++)
    {
        fa=fa*i;
    }
    return fa;
}
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Factorial of "<<n<<" is: "<<factorial_function(n);
    return 0;
}

//function with parameter value a with return value 

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Factorial of "<<n<<" is: "<<factorial_function(n);
    return 0;
}


int factorial_function(int n)
{
    int fa=1;
    for(int i=1;i<=n;i++)
    {
        fa=fa*i;
    }
    return fa;
}


// factorial  in four category of function with code
// function with parameter value without return value?
// function without  parameter value  with return value ?
// function without  parameter value  without return value ?
// function with no parameter value a without no return value

#include <iostream>

void factorialWithoutReturn(int n) {
    int fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    std::cout << "Factorial of " << n << " is: " << fact << std::endl;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    factorialWithoutReturn(num);
    return 0;
}
//second 
#include <iostream>

int factorialWithReturn() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    int fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

int main() {
    int result = factorialWithReturn();
    std::cout << "Factorial is: " << result << std::endl;
    return 0;
}
//third
#include <iostream>

void factorialWithoutParamAndReturn() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    int fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    std::cout << "Factorial is: " << fact << std::endl;
}

int main() {
    factorialWithoutParamAndReturn();
    return 0;
}
//four
#include <iostream>

void factorialNoParamNoReturn() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    int fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    std::cout << "Factorial is: " << fact << std::endl;
}

int main() {
    factorialNoParamNoReturn();
    return 0;
}

