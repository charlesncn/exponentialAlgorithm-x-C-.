#include <iostream>

using namespace std;

class Complexity{
	private: int b,e;
	public: int power(int base, int exp){
		
		if(base==0){
			return 0;
		}
		else if(exp==0){
			return 1;
		}
		else{
			return base*power(base, exp-1);
		}
	}
	public: void get(){
		cout<<"Enter base and exponent."<<endl;
		cin>>b>>e;
		
		cout<<b<<"^"<<e<<"="<<power(b,e)<<endl;
	}
};
int main()
{
	Complexity co;
	co.get();
	return 0;
	
}
