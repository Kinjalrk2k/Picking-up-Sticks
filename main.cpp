#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

void print_sticks(int n)
{
    for(int i=0; i<n; i++)
        cout<<(char)179<<" ";
    cout<<endl;
}

int main()
{
    bool compturn=false;
    int sticks=21, u_in;

    cout<<"PICKING UP STICKS"<<endl;
    cout<<"Pick any number of sticks from 1-4. The one picking the last stick looses"<<endl<<endl;

    while(u_in>0)
    {
        cout<<"Number of Sticks: "<<sticks<<endl;
        print_sticks(sticks);
        cout<<endl;
        cout<<"Enter the number of sticks to pick: ";
        cin>>u_in;

        sticks-=u_in;
        compturn=!compturn;
        if(sticks==1)
            break;

        cout<<endl<<"Number of Sticks: "<<sticks<<endl;
        print_sticks(sticks);
        cout<<endl;

        sticks-=(5-u_in);
        cout<<"COMPUTER picks up: "<<(5-u_in)<<endl;
        compturn=!compturn;
        if(sticks==1)
            break;

        cout<<endl;
    }

    cout<<endl<<"Number of Sticks: "<<sticks<<endl<<endl;
    if(compturn)
        cout<<"Player Wins!";
    else
    {
        cout<<"Player has to pick the last stick"<<endl;
        cout<<"Player Looses!";
    }

    _getch();
    return 0;
}
