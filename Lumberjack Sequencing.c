#include <bits/stdc++.h>
using namespace std;
int main(void){
	cout << "Lumberjacks:" << endl;
	int count=0;
	cin >> count;
	int flag=0;
	string str;
	
	getline(cin,str);//過濾掉換行符號

	int prevInput,curInput,inputNum;
	while(count--){
	
		getline(cin,str);
		stringstream ss(str);
		string out;
		
		getline(ss,out,' ');
		prevInput = stoi(out);
		getline(ss,out,' ');
		curInput = stoi(out);
		
		//cout << prevInput << curInput << endl;
		if(prevInput<curInput){
			flag=1;//increasing
		}
		else{
			flag=2;//decreasing
		}
		prevInput=curInput;
		//cout << "flag" << flag << endl;
		
		while(getline(ss, out, ' ')){
			curInput=stoi(out);
			if(prevInput<curInput){
				if(flag==2){
					cout << "Unordered" << endl;
					flag=0;
					break;
				}
			
			}
			else{
				if(flag==1){
					cout << "Unordered" << endl;
					flag=0;
					break;
				}
			}
			prevInput=curInput;
		
				
			
		}
		if(flag!=0){
				cout << "Ordered" << endl;
		}
				
	
		
	}
}