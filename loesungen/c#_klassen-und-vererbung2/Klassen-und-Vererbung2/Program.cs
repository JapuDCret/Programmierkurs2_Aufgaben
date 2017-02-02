using System;

namespace Klassen_und_Vererbung2
{
    static class Program
    {
        static void Main(string[] args)
        {
            Akazie a = new Akazie(6.3);
            Console.WriteLine("a.GetHoehe() = {0}, a.GetName() = {1}, a.GetBeschreibung() = {2}", a.GetHoehe(), a.GetName(), a.GetBeschreibung());
            
            Pflanze p = a;
            Console.WriteLine("p.GetHoehe() = {0}, p.GetName() = {1}, p.GetBeschreibung() = {2}", p.GetHoehe(), p.GetName(), p.GetBeschreibung());

            Console.ReadLine();
        }
    }
}