using System;
using System.Threading;

namespace Events
{
    partial class Stundenplan
    {
        private Tuple<string, int>[] stunden;
        private bool running = false;

        // definieren Sie ein delegate Ausgabe mit der selben
        // Signatur wie die Funktionen ZeigeStartAn/ZeigeEndeAn
        // der Klasse Bildschirm
        public delegate void Ausgabe(string name);

        // definieren Sie das Ereignis StundeBegonnen vom Typ Ausgabe
        public event Ausgabe StundeBegonnen;
        // definieren Sie das Ereignis StundeBeendet vom Typ Ausgabe
        public event Ausgabe StundeBeendet;

        public Stundenplan(Tuple<string, int>[] stunden)
        {
            this.stunden = stunden;
        }

        public void Start()
        {
            if (!running)
            {
                running = true;

                Thread t = new Thread(Berechne);
                t.Start();
            }
        }

        public void Stop()
        {
            running = false;
        }

        public bool Laufend()
        {
            return running;
        }
    }
}