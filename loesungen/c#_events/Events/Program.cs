using System;
using System.Threading;

namespace Events
{
    class Program
    {
        static void Main(string[] args)
        {
            Tuple<string, int>[] stunden1 = new Tuple<string, int>[]
            {
                new Tuple<string, int>("Sport", 3),
                new Tuple<string, int>("Pause", 1),
                new Tuple<string, int>("Deutsch", 3),
                new Tuple<string, int>("Große Pause", 2),
                new Tuple<string, int>("Mathe", 3)
            };
            Stundenplan plan1 = new Stundenplan(stunden1);

            Bildschirm bildschirm1 = new Bildschirm("Sekretariat");

            // Fügen Sie die FUnktionen ZeigeStartAn und ZeigeEndeAn
            // als Eventlistener hinzu
            plan1.StundeBegonnen += bildschirm1.ZeigeStartAn;
            plan1.StundeBeendet += bildschirm1.ZeigeEndeAn;

            plan1.Start();

            while(plan1.Laufend())
            {
                Thread.Sleep(1000);
            }

            Console.ReadLine();
        }
    }
}