#include<iostream>
using namespace std;
void basicPointer()
{
    int a = 10;
    int *ptr = &a ;
    cout << "value of a " << a <<endl;
    cout << "address of a " << &a<<endl;
    cout << "value of ptr " << ptr <<endl;
    cout << "dereferencing ptr "<<*ptr<<endl;
    cout << "address of ptr "<< &ptr << endl;
    cout << "seeing the address of a using ptr " << &*ptr<<endl;

    //pointing a pointer
    int **ptr1 = &ptr;
    cout <<"value of ptr1"<<ptr1 << endl;
    cout <<"dereferencing ptr1 (value of ptr) "<<*ptr1<<endl;
    cout <<"de-dereferencing ptr1 (value of a) "<< **ptr1<<endl;
}
void arrayPointing()
{ 
    int arr[3] = {1,2,3};
    int *ptr = &arr[0];
    cout << "arr+1 = " <<arr+1 << " = &arr[1] = "<<&arr[1]<<endl;
    cout << "*(arr+1) = " << *(arr+1) << " = arr[1] = "<< arr[1]<<endl;
    //ptr = arr[0] so ,arr[1]=*ptr+1 and arr[2]=*ptr+2
    cout << "&arr=" << &arr << " &arr[0]" <<&arr[0] <<endl;
    cout << "*ptr = arr[0] = "<< *ptr << endl;
    cout << "*ptr+1 = arr[0] = "<< *ptr+1 << endl;
   

}

void PassByValue(int a)
{
    a=20;
    cout<<"value of a inside function is "<< a;
}

void PassByPointer(int *a)
{
    *a=20;
    cout<<"value of a inside function is "<< *a;
}

void PassByReference(int &a)
{
    a=20;
    cout<<"value of a inside function is "<< a;
}

int main()
{
    int a = 5;
    //basicPointer();
    //arrayPointing();
    cout<<"PassByValue"<<endl;
    PassByValue(a);
    cout << endl  << "a=" << a << endl;
    a=5;
    cout<<"PassByPointer"<<endl;
    PassByPointer(&a);
    cout << endl << "a=" << a << endl;
    a=5;
    cout<<"passByRference"<<endl;
    PassByReference(a);
    cout << endl <<"a="<<a<<endl;


    return 0;

}
