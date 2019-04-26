#ifndef CHILD_H
#define CHILD_H
class Child {
private:
	string name;
	string surname;
	int age;
public:
	Child();
	Child(string name, string surname, int age);
	Child(const Child& object);
	~Child();
	int getAge();
	string getName();
	string getLastName();
	void setName(string name);
	void setLastName(string surname);
	void setAge(int age);
};
#endif