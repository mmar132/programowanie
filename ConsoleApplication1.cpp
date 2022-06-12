#include <iostream>
using namespace std;
template <typename T1, typename T2>


bool zamiana(T1& a, T2& b)
{
    T1 temp=a;
    a = b;
    b = temp;


}
template<typename A1, typename A2>
int zamiana(A1 a, A2 b)

{
    a = 7;
    b = 5;
    int pom;
    
        a = pom;
        a = b;
        b = pom;
    
}
template<>
int zamiana(int a, char* b) = delete;
int main()
{
  
    
    cout << zamiana(5, 7);
}



