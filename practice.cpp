#include<iostream>

void getInfo(float &salary, int &Hours) 
{
    std::cout << "Enter the salary: ";
    std::cin >> salary;
    std::cout << "Enter the number of hours: ";
    std::cin >> Hours;
}

void AddSal(float &salary) 
{
    if (salary < 500) 
    {
        salary += 10;
    }
}

void AddWork(float &salary, int Hours) 
{
    if (workHoursPerDay > 6) 
    {
        salary += 5;
    }
}

void printSalary(float salary) 
{
    std::cout << "Final Salary: " << salary << std::endl;
}

int main() 
{
    float salary;
    int Hours;

    getInfo(salary, Hours);
    AddSal(salary);
    AddWork(salary, Hours);
    printSalary(salary);

    return 0;
}
