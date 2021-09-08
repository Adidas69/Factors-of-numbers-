#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

int number;
cout<<"enter number : ";
cin>>number;
cout<<"\n factors of "<<number<<" is:"<<endl;
for(int i=1; i<=number; i++){
	if(number%i==0)
	cout<<"\n"<<i;
	
	
	
}












	return 0;
}
