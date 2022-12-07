#include <iostream>
#include <RandomNameGenerator.hpp>



using namespace std;
class Pracownik
{
    protected:
    string name;
    int salary;

    public:
    virtual void zatrudnij();
};

class Inz : public Pracownik
{
    private:
    float stala = 1;
    string faculty;
    public:
    Inz(string imie=get_random_name(), string wydzial, int pensja)
    {
        name = imie;
        
    }
};

class Mag : public Pracownik
{
    private:
    float stala = 1;
    bool wozek;
};

class Mkt : public Pracownik
{
    private:
    float stala = 1;
    int followers;
};

class Rob : public Pracownik
{
    private:
    float stala = 1;
    float but;
};

string nazwa_firmy;

void start();
void input();
bool state();
void cycle();

int main()
{
    cout<<"hello world!"<<endl;
    start();

    return 0;
}
void start()
{
    cout<<"Witaj w grze w FRIME. Wpisz swoje imie: ";
    cin>>nazwa_firmy;
    nazwa_firmy = nazwa_firmy+"POL";
    cout<<endl<<"Gratulacje!! Twoja firma nazywa się: "<<nazwa_firmy<<endl;
}