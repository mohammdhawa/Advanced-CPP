class University {
	vector<Department>departments;
};

class Department {
	vector<Professor>professors;
};

class Professor {
	vector<Department>Departments;
	vector<Professor>friends;
};
