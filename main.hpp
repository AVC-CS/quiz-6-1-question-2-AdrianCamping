#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int writeFile(string fileName){
    ofstream ofs;

    ofs.open(fileName);
    if (!ofs)
    {
        cout << "File Open Error\n";
        exit(0);
    }

    int employeeNum;

    int employeeID;
    string employeeName, employeeDepartment;
    double salary;

    cin >> employeeNum;
    ofs << employeeNum << endl;

    for(int i = 0; i < employeeNum; i++){
        cin >> employeeID >> employeeName >> employeeDepartment >> salary;
        ofs << employeeID << "\t" << employeeName << "\t" << employeeDepartment << "\t" << salary << endl;
    }
    return employeeNum;
}

int readFile(string fileName){
    ifstream ifs;

    ifs.open(fileName);
    if (!ifs)
    {
        cout << "File Open Error\n";
        exit(0);
    }

    double salary;
    int employeeNum, total;
    double average;

    int employeeID;
    string employeeName, employeeDepartment;

    ifs >> employeeNum;
    cout << "ID" << "\t" << "Name" << "\t" << "Department" << "\t" << "Salary" << endl;
    for(int i = 0; i < employeeNum; i++){
        ifs >> employeeID >> employeeName >> employeeDepartment >> salary;
        total += salary;
        cout << employeeID << "\t" << employeeName << "\t" << employeeDepartment << "\t" << salary << endl;
    }
    average = total / employeeNum;
    cout << "\t" << "\t" << "\t";
    cout << "Total: " << total << " " << "Average: " << average << endl;
    return employeeNum;
}