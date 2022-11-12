// all these work only in cpp
#include<bits/stdc++.h>
using namespace std;
class Adivi{
public:
	/*
	public,private,protected are the access specifiers in oops \
	function in class is called method
	and the constructor name in cpp will be same as the class name
	to access the private data we will create a public display method in the
	class so we can access it. 
	*/
	/*
	Encapsulation is nothing but keeping the data in private and accessing 
	the data by getdata and setdata public methods 
	*/
	/*
		types of constructors
		1.parameterized constructor // in this we will pass the arguments
		2.default constructor  //in this no arguments will be passed
		3.copy constructor // if we want to create the a new object
		with older object then the copy constructor will be used 
	*/
	/*
	Method Over riding parent class lo and child class lo same methods vunnapudu
	the if we create a object with child class then it will go to the child class
	but if we want to go to the parent class with child object then 
	childobject.parent class name::methodname;
	*/
	/*
	Method Overloading 
	if we want a differnt data type to be printed every time
	we have to pass diffent arguments but here we will write diff methods 
	with different datatypes and all these will be only in one class 
	*/
	int AniCount;  // these three are attributes
	int TreeCount; //attribute2
	string Name;  // attribute 3
 Adivi(int A,int T,string ame)  // constructor
 {
 	AniCount=A;
 	TreeCount=T;
 	Name=ame;
 }
 /*
Default Constructor
	Adivi(int a,int t,string a){
	AniCount=a;
	TreeCount=t;
	Name=a;
	}
 */ 
 Adivi(Adivi &b){
 	AniCount=b.AniCount;
 	TreeCount=b.TreeCount;
 	Name=b.Name;
 }
 void Display(){
 	cout<<AniCount<<" "<<TreeCount<<" "<<Name<<"\n";
 }
};
// ----------Inheritance--------------
class rectangle{
// parent class or base class 
};
class cuboid {
// child class or derived class
// base class data ni access cheyyochhu
}
/*
if chlid has single class
class childclass : public parent class name{
	
} 
if child has multiple class
class childclass : public parent1classname : public parent2classname{
	
} 
*/
int main(){
Adivi h1(20,30,"amazon");

Adivi h2(h1);
h1.Display();
h2.Display();
}