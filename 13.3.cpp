/*************************************************************************
	> File Name: 13.3.cpp
	> Author: Xu Wang
	> Mail: aoo_wangxu@163.com 
	> Created Time: Sat 11 Jun 2016 02:47:54 AM EDT
 ************************************************************************/

#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

void print(list<int> &lt)
{
    list<int>::iterator it;
    for (it = lt.begin(); it != lt.end(); ++it)
    {
        cout << *it<< "," ;
    }
    cout << endl;
}

class sequence
{
private:
    int value;
public:
    sequence(int ivalue):value(ivalue){}
    int operator()(){return ++value;}
};

int main()
{
    list<int> col;
    sequence seq(1);
    generate_n(back_inserter(col), 4, seq);
    print(col);
    generate_n(back_inserter(col), 4, sequence(42));
    print(col);
    generate_n(back_inserter(col), 4, seq);
    print(col);
    generate_n(back_inserter(col), 4, seq);
    print(col);
    return 0;
}
