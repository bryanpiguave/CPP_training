#include <iostream>

using namespace std;

void test(int range)
{
	int first = 0, second = 1, fibonacci = 0;
	for (int c = 0; c<range;c++)
	{
		if (c<=1){
			fibonacci=c;
		}else{
			fibonacci = first+second;
			first=second;
			second = fibonacci;
		}
		cout << fibonacci << " ";
	}
}

int main(){
	test(10);
	return 0;
}
