//Hector Jimenez
//03-3-17
//James Wilson
// Project 1 Part 1

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Dog {
private:
	string name;
	string color;
	string size;
public:
	Dog() {};
	~Dog() {};
	void displayDog() {
		cout << endl << "DOG" << endl;
		cout << "Name: " << name << endl;
		cout << "Color: " << color << endl;
		cout << "Size: " << size << endl;
		cout << "-------------" << endl << endl;
	};
	string getName() {
		return name;
	};
	void setName(string _name) {
		name = _name;
	};
	string getColor() {
		return color;
	};
	void setColor(string _color) {
		color = _color;
	};
	string getSize() {
		return size;
	};
	void setSize(string _size) {
		size = _size;
	};
};


class Cat {
private:
	string name;
	string color;
	string size;
public:
	Cat() {};
	~Cat() {};
	void displayCat() {
		cout << endl << "CAT" << endl;
		cout << "Name: " << name << endl;
		cout << "Color: " << color << endl;
		cout << "Size: " << size << endl;
		cout << "-------------" << endl << endl;
	};
	string getName() {
		return name;
	};
	void setName(string _name) {
		name = _name;
	};
	string getColor() {
		return color;
	};
	void setColor(string _color) {
		color = _color;
	};
	string getSize() {
		return size;
	};
	void setSize(string _size) {
		size = _size;
	};
};


class Bird {
private:
	string name;
	string color;
	string breed;
public:
	Bird() {};
	~Bird() {};
	void displayBird() {
		cout << endl << "BIRD" << endl;
		cout << "Name: " << name << endl;
		cout << "Color: " << color << endl;
		cout << "Breed: " << breed << endl;
		cout << "-------------" << endl << endl;
	};
	string getName() {
		return name;
	};
	void setName(string _name) {
		name = _name;
	};
	string getColor() {
		return color;
	};
	void setColor(string _color) {
		color = _color;
	};
	string getBreed() {
		return breed;
	};
	void setBreed(string _breed) {
		breed = _breed;
	};
};


class Shelter {
private:
	vector <Dog> allDogs;
	vector <Cat> allCats;
	vector <Bird> allBirds;
public:
	Shelter() {};
	~Shelter() {};
	void addDog(Dog _sampleDog) {
		string name, color, size;
		cout << "Enter name: "; getline(cin, name);
		cout << "Enter color: "; getline(cin, color);
		cout << "Enter size: "; getline(cin, size);
		_sampleDog.setName(name);
		_sampleDog.setColor(color);
		_sampleDog.setSize(size);

		allDogs.push_back(_sampleDog);
	};
	void addCat(Cat _sampleCat) {
		string name, color, size;
		cout << "Enter name: "; getline(cin, name);
		cout << "Enter color: "; getline(cin, color);
		cout << "Enter size: "; getline(cin, size);
		_sampleCat.setName(name);
		_sampleCat.setColor(color);
		_sampleCat.setSize(size);

		allCats.push_back(_sampleCat);
	};
	void addBirds(Bird _sampleBird) {

		string name, color, breed;
		cout << "Enter name: "; getline(cin, name);
		cout << "Enter color: "; getline(cin, color);
		cout << "Enter breed: "; getline(cin, breed);
		_sampleBird.setName(name);
		_sampleBird.setColor(color);
		_sampleBird.setBreed(breed);

		allBirds.push_back(_sampleBird);
	};

	void displayAllPets() {
		for (unsigned int i = 0; i < allDogs.size(); i++) {
			allDogs[i].displayDog();
		}
		for (unsigned int i = 0; i < allCats.size(); i++) {
			allCats[i].displayCat();
		}
		for (unsigned int i = 0; i < allBirds.size(); i++) {
			allBirds[i].displayBird();
		}
	};
};
void begin(Shelter*);

int main() {
	cout << "Welcome to the pet keeper app. Let's add some pets to inventory!" << endl;
	Shelter daShelter;
	Shelter* petsPtr = &daShelter;
	begin(petsPtr);
	return 0;
}

void begin(Shelter* shelterPointer) {
	string input;
	string moreInput;

	cout << "Would you like to add a [D]og, [C]at, or a [B]ird?" << endl;
	getline(cin, input);

	if (input == "D" || input == "d") {
		Dog tempDog;
		shelterPointer->addDog(tempDog);
	}
	else if (input == "C" || input == "c") {
		Cat tempCat;
		shelterPointer->addCat(tempCat);
	}
	else if (input == "B" || input == "b") {
		Bird tempBird;
		shelterPointer->addBirds(tempBird);
	}
	else { cout << "Unusuable Input. Try adding a pet!" << endl; begin(shelterPointer); }


	cout << "Would you like to display all pets?[Y/N] Warning: No will exit program." << endl << endl;
	getline(cin, moreInput);
	if (moreInput == "Y" || moreInput == "y") {
		shelterPointer->displayAllPets();
	}
	else if (moreInput == "N" || moreInput == "n") {
		cout << "Thanks for creating some pets! Goodbye :)" << endl;
		exit(0);
	}
	else { cout << "Unusuable Input. Try adding a pet!" << endl; begin(shelterPointer); }
	begin(shelterPointer);

};