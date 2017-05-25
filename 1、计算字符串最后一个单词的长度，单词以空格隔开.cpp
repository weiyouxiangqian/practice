//解法一：
/*使用动态数组来做，输入的字符串依次存入数组中，
最后返回数组中最后一个元素（字符串）的长度*/
#include<iostream>
#include<string>
#include<vector>
  
using namespace std;
  
int main(){
    string input;
    vector<string>arr;
    while(cin>>input){
        arr.push_back(input);
    }
    cout<<arr[arr.size()-1].length()<<endl;    
    return 0;
}

//解法二：

// C++
//有些同学的答案没考虑到末尾有空格的情况，对于末尾有空格的都输出为0了。
//“hello world     ”依然输出5.
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s)){
        int n=0,flag=1;
        for(int i=s.length()-1;i>=0;--i){//倒着计算
            if(flag && s[i]==' '){//如果末尾有空格，先清除末尾空格
                continue;
            }
            else if(s[i]!=' '){
                flag = 0;
                ++n;
            }
            else{
                break;
            }
        }
        cout << n << endl;
    }
    return 0;
}
