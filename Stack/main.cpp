#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> s;
    int n,choice;
    int val;
    cout<<"Enter the number of elements in the stack :";
    cin>>n;
    cout<<"\tStack operation using Vector class"<<endl;
    cout<<"---------------------------------------------------"<<endl;
    do
    {
        cout<<"\n\nEnter your choice :";
    cout<<"\n1.PUSH\n2.POP\n3.Show\n4.Exit"<<endl;
    cin>>choice;
    switch(choice)
    {
    case 1:
        if(s.size() < n)
        {
        cout<<"Enter the value :";
        cin>>val;
        s.push_back(val);
        }
        else
        cout<<"Stack Overflow"<<endl;
        break;
    case 2:
        if(s.size() >= 1 )
        s.pop_back();
        else
            cout<<"\nStack Underflow"<<endl;
        break;
    case 3:
        if(s.size()==0)
            cout<<"\nStack is empty "<<endl;
        cout<<endl;
        cout<<"-------"<<endl;
        for(int i=(s.size());i>0;i--)
        {
            cout<<s[i-1]<<endl;
            cout<<"-------"<<endl;
        }
        break;
    case 4:
        exit(1);
    default:
        cout<<"Invalid Choice ";
        break;
    }
    }while(1);

    return 0;
}
