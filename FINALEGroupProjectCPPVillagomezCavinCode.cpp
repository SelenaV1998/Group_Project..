// Basic Task Management System by Selena Villagomez and Delacey Cavin
// 12-12-23
// Adding, Deleting, and Listing Tasks Function
// Used for Adding Tasks Needed to Be Done,
// Deleting Tasks Finished or Not Needed,
// And Listing the Remaining Tasks in Order
// Functions for Adding, Deleting, and Listing Functions
// by Selena Vlllagomez
// Test running and Minor Debugging by Delacey Cavin

#include <iostream>
#include <string>

using namespace std;

// constant integer for a max of 25 tasks
// variables by Selena Villagomez
const int MAX_TASKS = 25;

string tasks[MAX_TASKS];
int taskIDs[MAX_TASKS];

int numTasks = 0;

// function for adding new tasks
// function by Selena Villagomez
void addTask(const string& taskDescription) {
	if (numTasks < MAX_TASKS) {
		int taskID = numTasks + 1;
		
		tasks[numTasks] = taskDescription;
		taskIDs[numTasks] = taskID;

		numTasks++;

		cout << "New task was added! ID: " << taskID << endl;
	}
	else {
		cout << "Error: Task limit is set to 25!" << endl;
	}
}


// function for deleting a task by ID number
// function by Selena Villagomez
// Minor Debugging by Delacey Cavin
void deleteTask(int taskID) {
	for (int i = 0; i < numTasks; ++i) {
		if (taskIDs[i] == taskID) {
			for (int j = i; j < numTasks - 1; ++j) {
				tasks[j] = tasks[j + 1];
				
				taskIDs[j] = taskIDs[j + 1 - 1];
			}

			numTasks--;
			cout << "\n - Task with ID " << taskID << " was deleted." << endl;
			return;
		}
	}

	cout << "Error: The task " << taskID << " was not found." << endl;

}

// function for listing the tasks in the order of ID number
// function by Selena Villagomez
void listTasks() {
	if (numTasks > 0) {
		cout << "\n>> Listing Tasks:" << endl;
		for (int i = 0; i < numTasks; ++i) {
			cout << "ID: " << taskIDs[i] << ", Task: " << tasks[i] << endl;
		}
	}
	else {
		cout << "This task is not available." << endl;
	}
}

//main function to display added, deleted, and listed tasks
//function coding by Selena Villagomez
//Tasks 7 - 27 by Delacey Cavin
//Deleted tasks by Selena Villagomez and Delacey Cavin
int main() {
	addTask("Individual Project");
	addTask("Group Project");
	addTask("Web Design Chapter 12");
	addTask("Chapter 10 assignments");
	addTask("Chapter 10 quiz");
	addTask("Networking Essay");
	addTask("Basic Web Design Chapter 10");
	addTask("Physics 105 Chapter 11");
	addTask("Physics 105 Final Exam");
	addTask("Take Written Driving Exam to Renew Permit");
	addTask("Feed My Cat");
	addTask("Basic Web Design Final Exam");
	addTask("Register for Spring Semester");
	addTask("Purchase RAM Sticks for Current Laptop");
	addTask("Find a New Laptop to Own");
	addTask("Create Custom Sonic Adventure 2 Shoes");
	addTask("Draw Concept Character Designs");
	addTask("Install 2D Unity Engine");
	addTask("Install Unreal Engine 4");
	addTask("Fold Clean Laundry from the Dryer");
	addTask("Replace Wheels on Skateboard");
	addTask("Japanese Kanji for 5 Minutes");
	addTask("Buy 1TB SSD");
	addTask("Buy 64GB SD Card");
	addTask("Weightlift Session");
	addTask("Prepare Work Attire");
	addTask("Moisturize Hair");

	listTasks();

	deleteTask(4);

	deleteTask(7);

	listTasks();

	return 0;
}