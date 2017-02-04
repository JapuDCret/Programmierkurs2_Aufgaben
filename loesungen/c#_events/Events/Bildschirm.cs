using System;

namespace Events
{
    class Bildschirm
    {
        private string bezeichnung;

        public Bildschirm(string bezeichnung)
        {
            this.bezeichnung = bezeichnung;
        }

        public void ZeigeStartAn(String s)
        {
            Console.WriteLine("Bildschirm(\"{0}\"): '{1}' hat begonnen", bezeichnung, s);
        }

        public void ZeigeEndeAn(String s)
        {
            Console.WriteLine("Bildschirm(\"{0}\"): '{1}' wurde beendet", bezeichnung, s);
        }
    }
}