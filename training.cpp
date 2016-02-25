#include <iostream>
#include <vector>
#include <list>
#include <iostream>
 int main(int argc, char const *argv[])
{
	std::vector <int> myVector(3);
	std::vector <int> myVector_2(4);
	myVector[0]=1;
	myVector[1]=1;
	myVector[2]=4;
	myVector_2[0]=1;
	myVector_2[1]=1;
	myVector_2[2]=4;
	if (myVector==myVector_2)
		std::cout<<"Vectors are equal\n";
	else
		std::cout<<"Vectors are not equal\n";
	for (int i=0;i<myVector.size();i++)
		std::cout<<myVector[i];
	std::cout<<"Vector 2 size is"<<myVector_2.size()<<"Capasity is "<<myVector_2.capacity();
    std::list <int> my_list;
    for (int i=0;i<10;i++) 
    	my_list.push_back(i);
    std::cout<<"My lisy size is "<<my_list.size();
    std::list<int>::iterator p=my_list.begin();
    while (p!= my_list.end()){
    	std::cout<<*p<<"\n";
    	p++;
    std::cout<<"byu";

    }	
	return 0;
}
