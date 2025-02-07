#include<iostream>
using namespace std;

//printing stars
int main()
{
    int row, col;
    for(row=1;row<=5;row+=1){
        for(col=1;col<=row;col+=1){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}


//printing 1 to 5
int main()
{
    int row, col;
    for(row=1;row<=5;row+=1){
        for(col=1;col<=row;col+=1){
            cout<<col;
        }
        cout<<endl;
    }

    return 0;
}

//printing 1 to 5 ascending
int main()
{
    int row, col;
    for(row=1;row<=5;row+=1){
        for(col=1;col<=row;col+=1){
            cout<<row;
        }
        cout<<endl;
    }

    return 0;
}


//reverse number pattern
int main()
{
    int row, col;
    for(row=1;row<=5;row+=1){
        for(col=row;col>=1;col-=1){
            cout<<col;
        }
        cout<<endl;
    }

    return 0;
}

//alphabet
int main()
{
    int row, col;
    for(row=1;row<=5;row+=1){
        char name = 'a' + row - 1;
        for(col=1;col<=row;col+=1){
            cout<<name<<" ";
        }
        cout<<endl;
    }
    return 0;
}

//printing stars in descending order
int main()
{
    int row, col;
    for(row=1;row<=5;row+=1){
        for(col=1;col<=5 - (row - 1);col+=1){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}