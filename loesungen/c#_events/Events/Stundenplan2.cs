using System.Threading;

namespace Events
{
    partial class Stundenplan
    {
        public void Berechne()
        {
            for (int i = 0; (running) && (i < stunden.Length); i++)
            {
                string name = stunden[i].Item1;
                int laenge = stunden[i].Item2;

                // lösen Sie ein StundeBegonnen Ereignis aus
                StundeBegonnen(name);
                Thread.Sleep(laenge * 1000);
                // lösen Sie ein StundeBeendet Ereignis aus
                StundeBeendet(name);
            }

            running = false;
        }
    }
}