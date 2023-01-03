#include<iostream>
using namespace std;

int main(){
	char grade;
	int count[5] = {}, student=0; 
	cout << "Please input grade of each student (A-F) or input 0 to exit." << endl;
	do{
		student++;
		cout << "Student [" << student << "]: ";
		cin >> grade;
		if(grade == 'A'){
			count[0]++;
		}else if(grade == 'B'){ 
			count[1]++;
		}else if(grade == 'C'){ 
			count[2]++;
		}else if(grade == 'D'){ 
			count[3]++;
		}else if(grade == 'F'){ 
			count[4]++;
		}else if(grade == '0'){ 
			count[5]++;
		}else{ 
			cout << "Wrong input. Please input again." << endl;
			student--;
		}
		 
	}while(grade != '0');
	
	
	cout << "In total " << student-1 << " students." << endl;
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4];
	
	return 0;
}
