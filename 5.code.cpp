#include <iostream>
using namespace std;

class student
{
    private:
        string name;
        int roll;
        int mark1, mark2, mark3;
    
    public:
        int total;
        int avg;

        // Correct return type to void since the function doesn't return a value
        void setdata(string n, int r)
        {
            name = n;
            roll = r;
        }

        void setmark(int m1, int m2, int m3)
        {
            mark1 = m1;
            mark2 = m2; // Fix the assignment
            mark3 = m3;
        }

        void calculate()
        {
            total = mark1 + mark2 + mark3;
        }

        void avrg()
        {
            avg = total / 3;
        }

        void display()
        {
            cout << "Total: " << total << " Average: " << avg << endl;
        }
};

int main()
{
    student ob;
    ob.setdata("arafat", 10);
    ob.setmark(10, 20, 30);
    
    // Calculate total and average before displaying
    ob.calculate();
    ob.avrg();
    
    ob.display();
  
    return 0;
}
