#include<iostream> 

using namespace std;
string keyvalpair[]={".",".","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
int keypadcombination (int num,string output[]){
    int currnum =  num%10;
    if(num==0||num==1){
        output[0]="";
        return 1;
    }
    int smallarsize = keypadcombination(num/10,output);


    for(int i = 1;i<keyvalpair[currnum].size();i++){
        for(int j = 0;j<smallarsize;j++){
            output[i*smallarsize+j]=output[j];
        } 
        
    }
    
    for(int i = 0;i<keyvalpair[currnum].size();i++){
        for(int j = 0;j<smallarsize;j++){
            output[i*smallarsize+j]+=keyvalpair[currnum][i];
        } 
        
    }
    return keyvalpair[currnum].size()*smallarsize;
    
}
int main(){
    int num;
    cin >> num;

    string output[10000];
    int count = keypadcombination(num, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;

    

    return 0;
}  