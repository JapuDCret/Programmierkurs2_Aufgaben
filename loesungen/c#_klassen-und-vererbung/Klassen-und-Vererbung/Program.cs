using System;

namespace Klassen_und_Vererbung
{
    static class Program
    {
        static void Main(string[] args)
        {
            Tanne t = new Tanne(21.9);
            // hier kommt die erste Ausgabe hin
            Console.WriteLine("t.getHoehe() = {0}", t.getHoehe());
            
            Pflanze p = t;
            // hier kommt die zweite Ausgabe hin
            Console.WriteLine("p.getHoehe() = {0}", p.getHoehe());

            // hier kommt das Zeilen einlesen hin
            Console.ReadLine();
        }
    }
}