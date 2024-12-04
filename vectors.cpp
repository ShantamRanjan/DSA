#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<char> vec = {'s','h','a','n','t','a','m'};
    cout<<vec[0]<<endl;
    for (char val : vec)//displaying a vector
    {
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<vec.size();//prints size of vector.
    cout<<endl;
    vec.push_back('l');//giving a push back value
    cout<<"size after push back = "<<vec.size()<<endl;
     for (char val : vec)//displaying vector after push back
    {
        cout<<val<<" ";
    }
    cout<<endl;
    vec.pop_back();
    cout<<"vector after pop back:-"<<endl;
    for (char val : vec)//displaying vector after pop back
    {
        cout<<val<<" ";
    }


    return 0;

}