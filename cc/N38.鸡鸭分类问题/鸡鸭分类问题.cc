#include<bits/stdc++.h>
using namespace std;

int compare(string s, char flag){
    int len = s.length();
    int sum=0,num=0;//sum�����ܵ��ƶ�����,num��������ж���ֻ��
    for(int i=0;i<len;i++){
        if(s[i] == flag){
            sum += i-num;
            num++;
        }
    }
    return sum;
}

int main(){
    string s;
    cin >> s;
    int sum = min(compare(s,'C'),compare(s,'D'));
    cout << sum << endl;
    return 0;
}