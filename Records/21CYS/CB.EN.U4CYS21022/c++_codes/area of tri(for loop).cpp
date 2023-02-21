#include<iostream>
using namespace std;
class Triangle
{
    private:
    int l;
    int b;
    public:
    void read()
    {
        cin>>l;
        cin>>b;
    }
    void Area()
    {
        cout<<0.5*l*b<<endl;
        
        cout<<"\n";
        
        
    }
    
};
int main()
{
    Triangle T[2];
    int i;
    for(i=0;i<2;i++)
    {
    T[i].read();
    T[i].Area();
    }
    return 0;
}


                                     OR
									

#include<iostream>
using namespace std;
class Triangle
{
    private:
    int l;
    int b;
    float Area()
    {
        return(0.5*l*b);
    }
    
    public:
    int t;
    void read()
    {
        cin>>l;
        cin>>b;
    }
    void Display()
    {
        cout<<Area()<<endl;
        
        cout<<"\n";
    }
        
        
    
    
};
int main()
{
    Triangle T[2];
    int i;
    for(i=0;i<2;i++)
    {
    T[i].read();
    T[i].Display();
    T[i].t=9;
    cout<<T[i].t<<endl;
    }
    return 0;
}
     

                                          OR

#include<iostream>
using namespace std;
class Triangle
{
    private:
    int l;
    int b;
    float Area()
    {
        return(0.5*l*b);
    }
    
    public:
    int t;
    void read()
    {
        cin>>l;
        cin>>b;
    }
    void Display();
};
void Triangle::Display()    //scope resolution is represented by'::'
    {
        cout<<Area()<<endl;
        
        cout<<"\n";
    }
        
        
    
    

int main()
{
    Triangle T[2];
    int i;
    for(i=0;i<2;i++)
    {
    T[i].read();
    T[i].Display();
    T[i].t=9;
    cout<<T[i].t<<endl;
    }
    return 0;
}

                                                     OR


#include<iostream>
using namespace std;
class Triangle
{
    private:
    int l;
    int b;
    float Area()
    {
        return(0.5*l*b);
    }
    
    public:
    void read(int l,int b)
    {
       this->l=l;
       this->b=b;
    }
    void Display();
};
void Triangle::Display()    //scope resolution is represented by'::'
    {
        cout<<Area()<<endl;
        
        cout<<"\n";
    }
        
        
    
    

int main()
{
    Triangle T[2];
    int i,a,b;
    for(i=0;i<2;i++)
    {
        cin>>a;
        cin>>b;
    T[i].read(a,b);
    T[i].Display();
    
    }
    return 0;
}
													 
									 