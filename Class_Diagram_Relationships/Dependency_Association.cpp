class Die {
public:
	
	void Roll() {

	}

};

class Player {
public:

	void TakeTurn(Die die) { // look ma, I am dependent on Die and it's Roll method to do my work
		die.Roll();
	}
};
