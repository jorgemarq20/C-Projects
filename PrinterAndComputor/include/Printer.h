#ifndef PRINTER_H
#define PRINTER_H


class Printer
{
    public:
        Printer(string, string, string, bool);

    private:
        string make, model, description;
        bool status;
};

#endif // PRINTER_H
