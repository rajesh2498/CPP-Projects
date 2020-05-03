#include <iostream>
#include <list>
using namespace std;

int main()
{
    list <int> Q;
    int n,choice,value;
    list <int> :: iterator p;
    cout<<"Enter the number of elements in the queue :"<<endl;
    cin>>n;
    cout<<"\tQueue operation using List(STL) class"<<endl;
    cout<<"-----------------------------------------------------"<<endl;
    do
    {
        cout<<"\nEnter your choice :"<<endl;
        cout<<"1.PUSH \n2.POP \n3.SHOW \n4.EXIT "<<endl;
        cin>>choice;
        switch(choice)
        {
        case 1:
            if(Q.size()==n)
                cout<<"\n\nQueue Overflow "<<endl;
            else
            {
                cout<<"Enter the value :"<<endl;
                cin>>value;
                Q.push_front(value);
            }
            break;
        case 2:
            if(Q.size()==0)
                cout<<"\n\nQueue is Underflow "<<endl;
            else
            {
                Q.pop_back();
            }
            break;
        case 3:
            p=Q.begin();
            if(Q.size()==0)
                cout<<"\nNo elements in the Queue "<<endl;
            else
            {
                cout<<"\n\n";
                while(p != Q.end())
                {
                cout<<*p<<"  ";
                p++;
                }
                cout<<"\n";
            break;
            }
    }
    }while(choice != 4);
}

