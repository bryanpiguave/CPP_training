#include <iostream>
#include <string>
using namespace std;
string test(int num){
	string ans = "";
	int i=1;
	while (i<=10){
		int answer = num*i;
		std::cout << num << "x" << i << " = " << answer << endl;
		ans += to_string(answer) + " ";
		i++;
	}
	return ans;
}
int main(){
	test(5);
	return 0;
}

