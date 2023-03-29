//c++ program to calculate CGPA
#include <iostream>
using namespace std;

double gpa();

int main(){
	int n, i = 1;
	double sum = 0.0;
	cout << "How many Semesters have you done: ";
	cin >> n;
	cout << "\n";
	
	while (i <= n){
		cout << "-------------------";
		cout << "Semester " << i ;
		cout << "-------------------\n";
		sum += gpa();
		i++;
	}
	cout << "\n";
	cout << "Your CGPA is: "<< sum/n;
	
	return 0;
}

double gpa(){
	int n;
	int unit;
	int grade;
	double u = 0;
	double gu;
	cout << "How many courses did you offer in this semester: ";
	cin >> n;
	char g;
	string s;
	//inputting the course name and unit
	for (int i = 0; i < n; i++){
		cout << "Enter course " << i+1 << " name: ";
		cin >> s;
		
		cout << "Enter the course unit: ";
		cin >> unit;
		u += unit;
		
		cout << "Enter the grade(A-F): ";
		cin >> g;
		if((g == 'A')||(g == 'a')){
			grade = 5;
		}else if((g == 'B')||(g == 'b')){
			grade = 4;
		}else if((g == 'C')||(g == 'c')){
			grade = 3;
		}else if((g == 'D')||(g == 'd')){
			grade = 2;
		}else if((g == 'E')||(g == 'e')){
			grade = 1;
		}else if((g == 'F')||(g == 'f')){
			grade = 0;
		}else{
			cout << "Invalid input\n";
			break;
		}
		gu += (grade*unit);
		
		cout << "\n";
	}
	gu = gu*1.0;
	u = u*1.0;
	double ans = gu/u;
	
	return ans;
}


