
using namespace std;

// Time class
class Time
{
public:
    int h1, h2, m1, m2, s1, s2;

    // default constructor
    // Two clocks : 12 and 24 hour format
    Time()
    {
        this->h1 = 12;
        this->h2 = 00;
        this->m1 = 00;
        this->m2 = 00;
        this->s1 = 00;
        this->s2 = 00;
    }

    // function to add 1 sec
    void addSecond()
    {
        s1++;
        s2++;
    }

    // function to wait 1 sec
    void waitSecond()
    {
        s1++;
        s2++;
    }

    // function to add 1 min
    void addMinute()
    {
        m1++;
        m2++;
    }

    // function to add 1 hour
    void addHour()
    {
        h1++;
        h2++;
    }

    // function to display both times
    void display()
    {
        printf("\nTime 1: %02d:%02d:%02d\n", h1, m1, s1);
        printf("Time 2: %02d:%02d:%02d\n\n", h2, m2, s2);
    }
};

int main()
{
    Time t;
    int p, n, m, f = 1;

    // Menu as given in flowchart
    while (f > 0)
    {
        t.display();
        cout << "Button Pressed? (1:yes, 2:no): " << endl;
        cin >> p;
        if (p == 1)
        {
            cout << "Choose option\n1. Add Time\n2. EXIT\nEnter 1 or 2: ";
            cin >> n;

            if (n == 1)
            {
                cout << "Choose option\n1. Add 1 hour\n2. Add 1 minute\n3. Add 1 second\nEnter 1, 2 or 3: ";
                cin >> m;

                switch (m)
                {
                case 1:
                    t.addHour();
                    break;
                case 2:
                    t.addMinute();
                    break;
                case 3:
                    t.addSecond();
                }
            }
            if (n == 2)
            {
                f = -1;
            }
        }
        else if (p == 2)
        {
            t.addSecond();
            t.waitSecond();
        }
    }
}