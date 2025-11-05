#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    Stocznia stocznia{};
    unsigned int transported = 0;
    int          zaglowiec_counter = 0;

    while (transported < towar)
    {
        int single_transport = 0;
        Statek* s1               = stocznia();

        single_transport = s1->transportuj();
        transported += single_transport;

        if (Zaglowiec* zaglowiec = dynamic_cast<Zaglowiec*>(s1))
        {
            zaglowiec_counter += 1;
        }
        delete s1;
    }
    return zaglowiec_counter;
}