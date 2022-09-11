class Dvd

{
    public:
    Dvd()
    {
        this->name= "Windows 10";
        this->company= "Microsoft";
        this->cost=150;
    }

    Dvd(string name, string company, int cost)
    {
        this->name= name;
        this->company= company;
        this->cost= cost;
    }

    Dvd(Dvd &copy_dvd)
    {
        this->name= copy_dvd.name;
        this->company= copy_dvd.company;
        this->cost= copy_dvd.cost;

    }

    string getname()
    {
        return this->name;
    }
    string getcompany()
    {
        return this->company;
    }

    int getcost()
    {
        return this->cost;
    }

    void setname(string name)
    {
        this->name= name;
    }

    void setcompany(string company)
    {
        this->company= company;
    }

    void setcost()
    {
        this->cost= cost;
    }

friend ostream& operator << (ostream& out, Dvd& d )
{
    out<<d.getname()<<endl<<d.getcompany()<<endl<<d.getcost()<<endl;
    return out;
}
private:
    string name;
    string company;
    int cost;

}
