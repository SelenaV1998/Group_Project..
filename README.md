#include <iostream>
#include <string>

using namespace std;

//constant integer for a max of 25 tasks
const int MAX_TASKS = 25;

string tasks[MAX_TASKS];
int taskIDs[MAX_TASKS];

int numTasks = 0;

// function for adding new tasks
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


//function for deleting a task
void deleteTask(int taskID) {
	for (int i = 0; i < numTasks; ++i) {
		if (taskIDs[i] == taskID) {
			for (int j = i; j < numTasks - 1; ++j) {
				tasks[j] = tasks[j + 1];
				
				taskIDs[j] = taskIDs[j + 1];
			}

			numTasks--;
			cout << "\n - Task with ID " << taskID << " was deleted." << endl;
			return;
		}
	}

	cout << "Error: The task " << taskID << " was not found." << endl;

}

// function for listing the tasks in the order of ID number
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
	addTask("Basic Web Design Final Exam");
	addTask("Feed My Cat");
	addTask("Complete Laundry");
	addTask("Purchase RAM Sticks for Current Laptop");
	addTask("Find New Laptop to Prepare for Future");
	addTask("Install Unity on Current Laptop");
	addTask("Install Unreal Engine on Current Laptop");
	addTask("Draw Prototype Characters for Future Designs");
	addTask("Register for Spring Semester");
	addTask("Apply to Universities for Transfer 24-25 Year");
	addTask("Take Written Driving Exam to Renew Permit");
	

	listTasks();

	deleteTask(4);

	deleteTask(9);

	deleteTask(13);

	listTasks();

	return 0;
}
