#include<iostream>
#include <string.h>
using namespace std;
int toNum(string val){
    int num = 0;
    if(val.length()==1){
        num = val[0]-'0';
    }
    if(val.length()==2){
        int tens = (val[0]-'0')*10;
        int ones = (val[1]-'0');
        num = tens+ones;
    }
    return num;
}
char toChar(int num){
    return num+'a'-1;
}
int getCodes(string input, string output[10000]) {
    if(input.size()==0){
        output[0]="";
        return 1;
    }
    string sout1[1000],sout2[1000];
    if(input.size()==1){
        output[0]=toChar(toNum(input.substr(0,1)));
        return 1;
    }
    int size2 = 0;
    int size1 = getCodes(input.substr(1),sout1);
    if(input.size()>1){
        if(toNum(input.substr(0,2))<27&&toNum(input.substr(0,2))>=10){
            size2 = getCodes(input.substr(2),sout2);
        }
    }
    int k  = 0; //traversing through the rows

    for(int i = 0;i<size1;i++){
        output[k++]=toChar(toNum(input.substr(0,1)))+sout1[i];
    }
    for (int i = 0; i < size2; i++)
    {
        output[k++]=toChar(toNum(input.substr(0,2)))+sout2[i];
    }
    return k;
    
}

int main(){
    string input;
    cin >> input;

    string output[10000];
    int count = getCodes(input, output);
    for(int i = 0; i < count && i < 10000; i++)
        cout << output[i] << endl;
    return 0;
}
