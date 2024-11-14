#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> tasks;

void showMenu() {
    cout << "\nTo-Do List Menu:\n";
    cout << "1. View tasks\n";
    cout << "2. Add a task\n";
    cout << "3. Delete a task\n";
    cout << "4. Exit\n";
}

void viewTasks() {
    if (tasks.empty()) {
        cout << "\nNo tasks in the to-do list.\n";
    } else {
        cout << "\nTo-Do List:\n";
        for (size_t i = 0; i < tasks.size(); i++) {
            cout << i + 1 << ". " << tasks[i] << endl;
        }
    }
}

void addTask() {
    string taskName;
    cout << "\nEnter the task name: ";
    cin.ignore();  // Clear the newline character from the buffer
    getline(cin, taskName);
    tasks.push_back(taskName);
    cout << "Task '" << taskName << "' added to the list.\n";
}

void deleteTask() {
    viewTasks();
    if (tasks.empty()) {
        return;
    }

    int taskNumber;
    cout << "\nEnter the task number to delete: ";
    cin >> taskNumber;

    if (taskNumber > 0 && taskNumber <= tasks.size()) {
        cout << "Task '" << tasks[taskNumber - 1] << "' deleted from the list.\n";
        tasks.erase(tasks.begin() + taskNumber - 1);
    } else {
        cout << "Invalid task number.\n";
    }
}

int main() {
    while (true) {
        showMenu();
        int choice;
        cout << "\nEnter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1:
                viewTasks();
                break;
            case 2:
                addTask();
                break;
            case 3:
                deleteTask();
                break;
            case 4:
                cout << "\nExiting the To-Do List application. Goodbye!\n";
                return 0;
            default:
                cout << "Invalid choice. Please choose a number between 1 and 4.\n";
                break;
        }
    }
}