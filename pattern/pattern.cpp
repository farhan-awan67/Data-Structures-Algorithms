#include<iostream>
using namespace std;

//printing * in 5 row and 5 columns
int main()
{
    int row,col;
    for(row=1;row<=5;row+=1){
        for(col=1;col<=5;col+=1){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}


//printing pattern of 1 to 5 in row and columns
int main()
{
    int row,col;
    for(row=1;row<=5;row+=1){
        for(col=1;col<=5;col+=1){
            cout<<row;
        }
        cout<<endl;
    }

    return 0;
}


//print 1 to 5 in row and columns
int main()
{
    int row,i;
    for(row=1;row<=5;row+=1){
        for(i=1;i<=5;i+=1){
            cout<<i;
        }
        cout<<endl;
    }

    return 0;
}


//print pattern of 1 to 5
int main()
{
    int row,i;
    for(row=1;row<=5;row+=1){
        for(i=5;i>=1;i-=1){
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}


//print 5 to 1 in row and columns
int main()
{
    int row,i;
    for(row=1;row<=5;row+=1){
        for(i=5;i>=1;i-=1){
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}


//print square of 1 to 5
int main()
{
    int row,i;
    for(row=1;row<=5;row+=1){
        for(i=1;i<=5;i+=1){
            cout<<i * i;
        }
        cout<<endl;
    }
    return 0;
}


//print cube of 1 to 5
int main()
{
    int row,i;
    for(row=1;row<=5;row+=1){
        for(i=1;i<=5;i+=1){
            cout<<i * i * i;
        }
        cout<<endl;
    }
    return 0;
}


//printing a to e
int main()
{
    int row, i;
    for(row=1;row<=5;row+=1){
         char name = 'a' + row - 1;  // Start from 'a' and add (row - 1)
        for(i=1;i<=5;i+=1){
            cout<<name<<" ";
        }
        cout<<endl;
    }
    return 0;
}


//print a to d;
int main()
{
    int row;
    for(row=1;row<=5;row+=1){
        //  char name = 'a' + row - 1;  // Start from 'a' and add (row - 1)
        for(char i='a';i<='d';i+=1){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}


//print 1 to 20 in row and column
int main(){
    int row,col,count=1;
    for(row=1;row<=5;row+=1){
        for(col=1;col<=5;col+=1){
            cout<<count;
            count+=1;
        }
        cout<<endl;
    }
    return 0;
}