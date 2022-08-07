#include <iostream>
int main (){
int n = 0,c = 0;
	std::cout << "请输入一个数" << std::endl;
	std::cin >> n ;
	int con = 1;
while (con){
	c = n % 2;
if(c == 0) {
	n /=2;
	std::cout << "n= " << n << std::endl;
	c = n % 2;
	}
if(c != 0)
	{n = 3*n+1;
	std::cout << "n= " << n << std::endl;
if (n == 4) {
con = 0;
std::cout << "此数满足3N+1\n";
}
	}
	}
return 0;
}
