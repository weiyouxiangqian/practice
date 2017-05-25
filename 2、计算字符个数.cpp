
写出一个程序，接受一个有字母和数字以及空格组成的字符串，和一个字符，然后输出输入字符串中含有该字符的个数。不区分大小写。

输入描述:
输入一个有字母和数字以及空格组成的字符串，和一个字符。


输出描述:
输出输入字符串中含有该字符的个数。

输入例子:
ABCDEF
A

输出例子:
1

#include<iostream>
#include<string>
 
using namespace std;
 
int main(){
    string input;
    char target;
    getline(cin,input);
    cin>>target;
    char target1;
    if(target>=65 && target<=90)
        target1=target+32;
    if(target>=97 && target<=122)
        target1=target-32;
    int count=0;
    for(int i=0;i<input.length();++i){
        if(input[i]==target || input[i]==target1)
        count++;
    }
    cout<<count<<endl;
    return 0;
}

