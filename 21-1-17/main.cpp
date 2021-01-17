//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    cout << "Hello world!" << endl;
//    return 0;
//}
//#include<iostream>
//using namespace std;
//class A
//{
//
//};
//class B{};
//class C{
//private:
//A a;
//B b;
//public:
//    B();
//    ~B();
//};
//int main()
//{
//
//    return 0;
//}
//#include<iostream>
//using namespace std;
//class B;
//class A
//{
//public:
//    A(int ii):i(0){cout<<"A::A()"<<endl;}
//    ~A(){cout<<"A::~A()"<<endl;}
//    void print() {cout<<"A::print() "<<i<<endl;}
//    void print(int i){cout <<i<<endl;print();}
//    void set(int ii){i=ii;}
//    friend B;
//private:
//    int i;
//};
//class B:public A
//{
//public:
//    B():A(10){cout<<"B::B()"<<endl;}
//    ~B(){cout<<"B::~B()"<<endl;}
//    void fprint(){set(20);print();}
//};
//void f(int a=0,int b=0);
//void f(int a,int b)
//{
//    cout<<a<<' '<<b<<endl;
//}
//int main()
//{
//    B b;
//    b.set(10);
//    b.print(1);
//    b.fprint();
//    f(10,20);
//    f();
//    f(10);
//    return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//    std::string a;
//    cin >>a;
//    cout<<"Hello "<<a;
//    return 0;
//}
