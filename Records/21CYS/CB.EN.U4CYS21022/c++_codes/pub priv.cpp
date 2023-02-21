#include<iostream>
using namespace std;
class student
{
    private:
    int mark;
    public:
    void fun(int m)
    {
        mark=m;
        cout<<mark;
    }
};

int main()
{
    student S,T;
    S.fun(10);
    cout<<endl;
    T.fun(20);
return 0;
}
    
    