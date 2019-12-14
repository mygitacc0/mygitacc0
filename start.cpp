#include <iostream>
#include <vector>

class Inf(){
	public:
	virtual void info() = 0;
};
class RInf():public Inf{
	public:
	void info(){std::cout<<"RInf";}
};
int main(){
    std::cout<<"hi";
	return 1;
}


